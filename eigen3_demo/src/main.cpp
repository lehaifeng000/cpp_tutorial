#include <iostream>
#include <Eigen/Dense>
#include <ctime>

#include "vec_library.h"

int main()
{
    // 用当前时间作为种子初始化随机数生成器
    srand((unsigned int) time(0));
    
    int vecLength=512;
    int librarySize = 10000;
    Eigen::VectorXd rdv(vecLength);
    std::cout<<"init library"<<std::endl;
    VecLibrary vecLibray;
    vecLibray.initLibrary(librarySize,vecLength);

    for(int i=0;i<librarySize;i++){
        rdv.setRandom();
        Eigen::VectorXd tv = rdv.normalized();
        vecLibray.insertVec(i,tv);
    }
    std::cout<<"insert "<<librarySize<<std::endl;

    rdv.setRandom();
    rdv.normalized();
    Eigen::VectorXd  searchVec = rdv.normalized();
    int retIndex;
    Eigen::VectorXd  *retVec = new Eigen::VectorXd(vecLength);
    float score = vecLibray.searchTop1(searchVec, &retIndex, retVec);
    std::cout<<"score: "<<score<<std::endl;
    std::cout<<"index: "<<retIndex<<std::endl;
    vecLibray.clearLibrary();
    return 0;

}