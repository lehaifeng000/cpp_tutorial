//
// Created by lhf on 2023/12/4.
//

#include <iostream>
//#include <string.h>
#include <curl/curl.h>
//#include <json/json.h>
//#include <fstream>
//#include "json.hpp"

inline size_t onWriteData(void * contents, size_t size, size_t nmemb,std::string* outpot)
{
    size_t totalSize = size * nmemb;
    outpot->append((char *)contents, totalSize);
    return totalSize;
}

int main(){
    std::string url="https://mock.apifox.com/m1/3699689-0-default/test";
    CURL *curl = curl_easy_init();
    std::string response;
    if(curl){
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, onWriteData);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response );
        //执行
        CURLcode res = curl_easy_perform(curl);
        if(res != CURLE_OK){
            std::cout<<"请求失败"<<std::endl;
            std::exit(-1);
        }else{
            std::cout<<"返回结果："<< response<<std::endl;
        }
    }
    std::cout<<"this is http demo"<<std::endl;
    return 0;
}