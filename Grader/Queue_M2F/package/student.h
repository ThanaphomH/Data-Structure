#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    int cap = mCap;
    int pos_idx = (mFront + pos) % cap;
    T tmp = mData[pos_idx];
    for (int i= pos_idx; i != mFront ;i = (i-1+cap)%cap) {
        int j= (i-1+cap)%cap;
        mData[i] = mData[j];
    }
    mData[mFront] = tmp;
}

#endif
