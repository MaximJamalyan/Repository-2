#include <stddef.h>
#include "../include/array_function.h"
void join_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    for (size_t i = 0; i < size_src1; i++) {
        dest[i] = src1[i];
    }

    for (size_t i = 0; i < size_src2; i++) {
        dest[size_src1 + i] = src2[i];
    }
}
