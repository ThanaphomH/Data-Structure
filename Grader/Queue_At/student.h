#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  if (idx < 0) {
    idx = (mSize) + idx;
  }
  return mData[(mFront+idx)%((int)(mCap))];
  // return 
}

#endif
