//
// Created by lhf on 2023/10/24.
//
#include <iostream>
#include "libMyStruct.h"

int main() {
    Student student{20, "lhf"};
//    student.age=20;
    std::cout << student.name << "  " << student.age << std::endl;

    return 0;
}