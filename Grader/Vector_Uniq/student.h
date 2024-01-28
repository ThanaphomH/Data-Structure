#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <unordered_map>

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  T *tmp = new T[mCap]();
  std::unordered_map<T,bool> ch;
  int cur = 0;
  int si = 0;
  for (int i=0;i<mSize;i++) {
    if (!ch.count(mData[i])) {
      tmp[cur] = mData[i];
      cur++;
      si++;
    }
    ch[mData[i]] = true;
  }
  delete[] mData;
  mData = tmp;
  mSize = si;
}

#endif
