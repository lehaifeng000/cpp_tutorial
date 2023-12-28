#pragma once

#include <vector>
#include <Eigen/Dense>

class VecLibrary
{
private:
    //保存向量
    // std::vector<Eigen::VectorXd> vec_list;
    Eigen::VectorXd *vecList;
    int vecLength;
    int size;
public:
    VecLibrary(/* args */);
    ~VecLibrary();

    /**
     * 初始化仓库
    */
    bool initLibrary(const int size, const int vecLength);
    bool clearLibrary();
    /**
     * 插入向量
    */
    int insertVec(int index, Eigen::VectorXd &newVec);

    float searchTop1(Eigen::VectorXd &searchVec, int *retIndex, Eigen::VectorXd *retVec);

};


