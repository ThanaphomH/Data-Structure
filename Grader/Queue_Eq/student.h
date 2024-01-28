#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
  //write your code here
  //
  // YOU CANNOT CALL push or pop
  if (other.mSize != mSize) return false;
  int iF = mFront,jF = other.mFront;
  while (iF != ((mFront + mSize)%((int)(mCap))) && jF != ((other.mFront + other.mSize) % ((int)(other.mCap)))) {
    if (mData[iF] != other.mData[jF]) return false;
    iF = (iF+1)%((int)(mCap));
    jF = (jF+1)%((int)(other.mCap));
  }
  return true;
}

#endif
