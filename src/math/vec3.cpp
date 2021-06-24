#include "math/vec3.h"

vec3::vec3(float x, float y, float z)
    : x(x), y(y), z(z)
{}

vec3::vec3()
    : vec3(0.0f, 0.0f, 0.0f)
{}

vec3 vec3::operator+(const vec3 &other)
{
    return vec3(
        this->x + other.x,
        this->y + other.y,
        this->z + other.z
    );
}

vec3 vec3::operator-(const vec3 &other)
{
    return vec3(
        this->x - other.x,
        this->y - other.y,
        this->z - other.z
    );
}

vec3 vec3::operator*(float multiplier)
{
    return vec3(
        this->x * multiplier,
        this->y * multiplier,
        this->z * multiplier
    );
}

vec3 vec3::cross(const vec3 &other)
{
    return vec3(
        this->y * other.z - other.y * this->z,
        this->z * other.x - other.z * this->x,
        this->x * other.y - other.x * this->y
    );
}

float vec3::dot(const vec3 &other)
{
    return 
        this->x * other.x +
        this->y * other.y +
        this->z * other.z;
}

std::ostream &operator<<(std::ostream &os, const vec3 &v)
{
    os << "{" << v.x << ", " << v.y << ", " << v.z << "}";
    return os;
}