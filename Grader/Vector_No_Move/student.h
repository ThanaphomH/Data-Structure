#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T &CP::vector_no_move<T>::operator[](int idx)
{
  // your code here
  auto aux_idx = lower_bound(aux.begin(),aux.end(),idx+1) - aux.begin();
  if (aux_idx == 0) {
    return mData[aux_idx][idx];
  } else {
    return mData[aux_idx][idx - aux[aux_idx-1]];
  }
}

template <typename T>
void CP::vector_no_move<T>::expand_hook()
{
  // your code here
  // you MAY need this function
  aux.push_back(mCap);
}

#endif
