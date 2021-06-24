#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <inttypes.h>
#include <iostream>

/// @note stored as array of column vectors
template<uint32_t RowCount, uint32_t ColCount>
class Mat
{
public:
    Mat()
    {
        memset(matrix, 0, sizeof(float) * RowCount * ColCount);
        for(uint32_t i = 0; i < RowCount; i++)
        {
            matrix[i * ColCount + i] = 1.0f;
        }
    }

    friend std::ostream &operator<<(std::ostream &os, const Mat &mat)
    {
        os << "[";
        for(uint32_t col = 0; col < ColCount; col++)
        {
            for(uint32_t row = 0; row < RowCount; row++)
            {
                os << mat.matrix[ col * RowCount + row ] << ", ";
            }
            os << ";";
        }
        return os << "]";
    }

public:
    float matrix[ ColCount * RowCount ] = {};
};

#endif