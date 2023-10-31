#include <iostream>
#include "json.hpp"
#include <fstream>

using json = nlohmann::json;
using namespace std;
int main()
{
    //json -> file
    cout<<"hello"<<endl;
    json data;
    data["name"]="lhf";
    data["age"]=27;
    data["city"]="beijing";
    std::ofstream file("data.json");
    //直接写入，无缩进
//    file << data;
    //格式化写入
    file << data.dump(4);
    file.flush();
    file.close();

    //file-> json
    ifstream inFile("data.json");
    json json2 = json::parse(inFile);
    cout<<json2["age"];

    //合并
    data.merge_patch(json2);//这种方式后者覆盖前者
    data+=json2;//这种方式不覆盖，只添加没有的键

    return 0;
}

