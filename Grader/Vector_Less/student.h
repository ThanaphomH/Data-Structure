#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  int i = 0 , j = 0;
  while (i < mSize && j < other.mSize) {
    if (mData[i] == other.mData[j]) {
      i++;
      j++;
    } else {
      return mData[i] < other.mData[j];
    }
  }
  if (i >= mSize && j >= other.mSize) return false;
  if (i >= mSize) return true;
  return false;
}

#endif
