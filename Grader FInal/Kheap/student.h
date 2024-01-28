#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    int p;
    while ((p = (idx-1)/4) >= 0) {
        if (mLess(mData[idx] , mData[p])) break;
        T tmp = mData[idx];
        mData[idx] = mData[p];
        mData[p] = tmp;
        idx = p;
    }
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    int c;
    while ((c = ((idx*4) + 1)) < mSize) {
        int choose = 0;
        T cmp = mData[c];
        for (int cc=1;cc<4;cc++) {
            if (c+ cc < mSize && mLess(cmp , mData[c+cc])) {
                choose = cc;
                cmp = mData[c+cc];
            }
        }
        if (mLess(cmp , mData[idx])) break;
        T tmp = mData[idx];
        mData[idx] = mData[c + choose];
        mData[c + choose] = tmp;
        idx = c + choose;
    }
}

#endif

