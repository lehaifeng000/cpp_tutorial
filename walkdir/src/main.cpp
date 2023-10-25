#include <iostream>
#include <string>
#include <dirent.h>

int main()
{
    std::cout<<"start"<<std::endl;

    std::string folderPath = "D:";
    DIR *dir = opendir(folderPath.c_str());
    if (dir == nullptr){
        std::cout<<"can't open dir"<<std::endl;
        
    }

    std::cout<<"end"<<std::endl;    
}