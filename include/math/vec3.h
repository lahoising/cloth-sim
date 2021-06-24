#ifndef _VEC3_H_
#define _VEC3_H_

#include <iostream>

class vec3
{
public:
    vec3();
    vec3(float x, float y, float z);
    
    vec3 operator+(const vec3 &other);
    vec3 operator-(const vec3 &other);
    vec3 operator*(float multiplier);
    friend std::ostream &operator<<(std::ostream &os, const vec3 &v);

    vec3 cross(const vec3 &other);
    float dot(const vec3 &other);

public:
    float x, y, z;
};

#endif