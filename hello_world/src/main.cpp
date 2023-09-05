#include "libs/Student.h"
#include <iostream>


int main()
{
    std::cout<<"start"<<std::endl;
    Student stu;
    stu.age=100;
    stu.print_age();
    std::cout<<"end"<<std::endl;    
}