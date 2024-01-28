#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse() {
  // Your code here
  if (mSize == 0) return;
  int cnt = mSize / 2;
  int f = mFront , b = aux;
  while (cnt--) {
    T tmp = mData[f];
    mData[f] = mData[b];
    mData[b] = tmp;

    f = (f + 1) % (int)(mCap);
    b = (b - 1 + mCap) % (int)(mCap);
  }
}

template <typename T>
const T& CP::queue<T>::front() const {
  // You MAY need to edit this function
  return mData[mFront];
}

template <typename T>
const T& CP::queue<T>::back() const {
  // You MAY need to edit this function
  return mData[aux];
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  // You MAY need to edit this function
  ensureCapacity(mSize + 1);
  mData[(mFront + mSize) % (int)(mCap)] = element;
  mSize++;
  aux = (mFront + mSize - 1) % (int)(mCap);
}

template <typename T>
void CP::queue<T>::pop() {
  // You MAY need to edit this function
  mFront = (mFront + 1) % (int)(mCap);
  mSize--;
  aux = (aux - 1 + mCap) % (int)(mCap);
}

#endif