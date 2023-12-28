//
// Created by lhf on 2023/12/7.
//
#include <iostream>
#include <opencv2/opencv.hpp>
#include <math.h>
int main()
{
    // 读取图像
    cv::Mat image = cv::imread("../data/xuenai.jpg");

    if (!image.empty()) {
        // 图像处理逻辑
        cv::Mat grayImage;
        cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);

        // 转存图像
        cv::imwrite("./image.jpg", grayImage);
    } else {
        // 图像读取失败
        std::cout << "无法读取图像" << std::endl;
    }
    return 0;
}