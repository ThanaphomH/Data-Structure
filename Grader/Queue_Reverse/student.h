#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  int ms = mSize, mc = mCap, mf = mFront;
  int f = (mf + a) % mc , ba = (mf + b) % mc;
  int cnt = (b-a+1) / 2;
  while (cnt--) {
    T tmp = mData[f];
    mData[f] = mData[ba];
    mData[ba] = tmp;

    f = (f + 1 + mc) % mc;
    ba = (ba - 1 + mc) % mc;
  }
}

#endif
