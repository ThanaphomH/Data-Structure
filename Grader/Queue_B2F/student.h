#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  //write your code here
  if (mSize <= 1) return;
  int b = (mFront + mSize -1) % mCap;
  T tmp = mData[b];
  mFront = (mFront - 1 + mCap) % mCap;
  mData[mFront] = tmp;
}

#endif
