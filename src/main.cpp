#include <iostream>
#include "math/vec.h"
#include "math/mat4.h"

int main(int argc, char *argv[])
{
    Mat4 mat{};

    std::cout << mat << std::endl;
    std::cout << "mat scaled {0.5, 1.7, 89.0} = " << mat.Scale({0.5f, 1.7f, 89.0f}) << std::endl;
    std::cout << "mat translated {7.0, 23.0, 98.17} = " << mat.Translate({7.0f, 23.0f, 98.17f}) << std::endl;

    return 0;
}