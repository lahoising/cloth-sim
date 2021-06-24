#include "math/mat4.h"

Mat4 Mat4::Scale(vec3 scale) const
{
    Mat4 mat = *this;
    mat.matrix[ 0 * 4 + 0 ] = scale.x;
    mat.matrix[ 1 * 4 + 1 ] = scale.y;
    mat.matrix[ 2 * 4 + 2 ] = scale.z;
    return mat;
}

Mat4 Mat4::Translate(vec3 translation) const
{
    Mat4 mat = *this;
    mat.matrix[3 * 4 + 0] = translation.x;
    mat.matrix[3 * 4 + 1] = translation.y;
    mat.matrix[3 * 4 + 2] = translation.z;
    return mat;
}
