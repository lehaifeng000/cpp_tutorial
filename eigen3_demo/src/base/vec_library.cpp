#include "vec_library.h"

VecLibrary::VecLibrary(){

}

VecLibrary::~VecLibrary(){

}

bool VecLibrary::initLibrary(const int size, const int vecLength){
    //申请内存
    this->size = size;
    this->vecLength=vecLength;
    vecList = new Eigen::VectorXd[size];
    for(int i=0;i<size;i++){
        vecList[i]=Eigen::VectorXd(vecLength);
    }
}


bool VecLibrary::clearLibrary(){
    delete []vecList;
}

int VecLibrary::insertVec(int index, Eigen::VectorXd &newVec){
    vecList[index]=newVec;
}

float VecLibrary::searchTop1(Eigen::VectorXd &searchVec, int *retIndex, Eigen::VectorXd *retVec){
    float maxScore=-1;
    int index=0;
    for(int i=0;i<this->size;i++){
        float score = searchVec.dot(vecList[i]);
        if(score>maxScore){
            index=i;
            maxScore=score;
        }
    }
    *retIndex=index;
    *retVec = vecList[index];
    return maxScore;
}