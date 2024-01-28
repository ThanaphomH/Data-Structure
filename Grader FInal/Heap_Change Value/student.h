#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <assert.h>

template <typename T,typename Comp>
void CP::priority_queue<T,Comp>::change_value(size_t pos,const T& value) {
  //write your code here
  mData[pos] = value;
  // fixUp(pos);
  // fixDown(0);
  bool fixUp = true;
  while(pos > 0 && fixUp) {
    int p = (pos-1)/2;
    fixUp = false;
    if (mLess(mData[p] , mData[pos])) {
      T tmp = mData[p];
      mData[p] = mData[pos];
      mData[pos] = tmp;
      pos = p;
      fixUp = true;
    }
  }

  bool fixDown = true;
  while ( (pos*2 + 1) < mSize && fixDown) {
    int c = (pos*2 + 1);
    fixDown = false;
    int l = c , r = c+1;
    if (r < mSize && mLess(mData[l] , mData[r])) {
      l = c+1;
      r = c;
    }
    if ( l < mSize && mLess(mData[pos] , mData[l])) {
      T tmp = mData[pos];
      mData[pos] = mData[l];
      mData[l] = tmp;
      pos = l;
      fixDown = true;
    } else if ( r < mSize && mLess(mData[pos] , mData[r])) {
      T tmp = mData[pos];
      mData[pos] = mData[r];
      mData[r] = tmp;
      pos = r;
      fixDown = true;
    }
  }

  print();
}

#endif
