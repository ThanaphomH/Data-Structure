#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    int j = mSize - 1;
    int r = j - a, l = j - b;
    expand(mSize + (b-a) + 1);
    int i = mSize + (b-a);
    while (i >= 0) {
        mData[i] = mData[j];
        i--;
        if ((l <= j) && (j <= r)) {
            mData[i] = mData[j];
            i--;
        }
        j--;
    }
    mSize += (b-a) + 1;
}

#endif