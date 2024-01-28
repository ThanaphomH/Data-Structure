#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  int cap = mCap;
  if (mSize <= 1) return;
  int pos_idx = (mFront + pos) % cap;
  T tmp = mData[pos_idx];
  int b = (mFront + mSize - 1) % cap;
  // for (int i=pos_idx ; i != b ; i = (i+1)% cap) {
  //   int j = (i+1) % cap;
  //   mData[i] = mData[j];
  // }
  int i = pos_idx;
  while (i != b) {
    int j = (i+1) % cap;
    mData[i] = mData[j];
    i = (i+1)%cap;
  }
  mData[b] = tmp;
}

#endif