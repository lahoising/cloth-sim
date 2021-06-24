#include <iostream>
#include "math/vec.h"

int main(int argc, char *argv[])
{
    vec3 a = {1.0f, 1.0f, 1.0f};
    vec3 b = {0.2f, 0.5f, 0.7f};
    float scale = 0.15f;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a - b = " << (a - b) << std::endl;
    std::cout << "a * " << scale << " = " << (a * 0.15f) << std::endl;
    std::cout << "a dot b = " << (a.dot(b)) << std::endl;

    vec3 fwd = vec3(0.0f, 0.0f, 1.0f);
    vec3 right = vec3(1.0f, 0.0f, 0.0f);
    std::cout << "fwd x right = " << fwd.cross(right) << std::endl;

    return 0;
}