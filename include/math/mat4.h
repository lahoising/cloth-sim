#ifndef _MAT4_H_
#define _MAT4_H_

#include "matrix.h"
#include "vec.h"

class Mat4 : public Mat<4,4>
{
public:
    Mat4() : Mat<4,4>() {}
    Mat4 Scale(vec3 scale) const;
    Mat4 Translate(vec3 translation) const;
};

#endif