#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse()
{
  // Your code here
  aux = (aux == 0) ? 1 : 0;
}

template <typename T>
const T &CP::queue<T>::front() const
{
  // You MAY need to edit this function
  if (aux == 0)
    return mData[mFront];
  else
    return mData[(mFront + mSize - 1) % (int)(mCap)];
}

template <typename T>
const T &CP::queue<T>::back() const
{
  // You MAY need to edit this function
  if (aux == 0)
    return mData[(mFront + mSize - 1) % (int)(mCap)];
  else
    return mData[mFront];
}

template <typename T>
void CP::queue<T>::push(const T &element)
{
  // You MAY need to edit this function
  ensureCapacity(mSize + 1);
  if (aux == 0) {
    mData[(mFront + mSize) % (int)(mCap)] = element;
    mSize++;
  } else {
    mFront = (mFront - 1 + mCap) % (int)(mCap);
    mData[(mFront) % (int)(mCap)] = element;
    mSize++;
  }
  
}

template <typename T>
void CP::queue<T>::pop()
{
  // You MAY need to edit this function
  if (aux == 0)
  {
    mFront = (mFront + 1) % (int)(mCap);
    mSize--;
  } else {
    mSize--;
  }
}

#endif