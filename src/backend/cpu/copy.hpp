#include <af/array.h>
#include <Array.hpp>

namespace cpu {
    template<typename T>
    void copyData(T *data, const Array<T> &A);

    template<typename T>
    Array<T>* copyArray(const Array<T> &A);
}