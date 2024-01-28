#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other) {
  // your code here
  T *tmp = mData;
  mData = other.mData;
  other.mData = tmp;

  size_t tmps = mSize;
  mSize = other.mSize;
  other.mSize = tmps;

  size_t tmpp = mCap;
  mCap = other.mCap;
  other.mCap = tmpp;

}

#endif
