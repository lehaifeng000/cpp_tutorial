#include <iostream>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;
int main()
{
    cout<<"hello"<<endl;
    json data;
    data["name"]="lhf";
    data["age"]=27;
    data["city"]="beijing";
    std::ofstream file("data.json");
    file << data
    return 0;
}

