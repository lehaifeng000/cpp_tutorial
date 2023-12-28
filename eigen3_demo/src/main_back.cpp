#include <iostream>
#include <Eigen/Dense>

int main() {
    // 创建长度为 10 的一维向量
    Eigen::VectorXd v1(10);
    Eigen::VectorXd v2(10);

    // 给向量赋值
    v1 << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0;
    v2 << 10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0;

    // 向量加法
    Eigen::VectorXd sum = v1 + v2;
    std::cout << "Sum: " << sum.transpose() << std::endl;

    // 向量减法
    Eigen::VectorXd diff = v1 - v2;
    std::cout << "Difference: " << diff.transpose() << std::endl;

    // 向量乘法（逐元素乘法）
    Eigen::VectorXd prod = v1.cwiseProduct(v2);
    std::cout << "Element-wise Product: " << prod.transpose() << std::endl;

    return 0;
}