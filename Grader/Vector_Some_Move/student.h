#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value)
{
  // std::cout << "mData:" << std::endl;
  // for (int i=0;i<mData.size();i++) {
  //   for (int j=0;j<mData[i].size();j++) std::cout << mData[i][j] << " ";
  //   std::cout << std::endl;
  // }
  // std::cout << "aux:" << std::endl;
  // for (int i=0;i<aux.size();i++) std::cout << aux[i] << " ";
  // std::cout <<std:: endl;

  int idx = lower_bound(aux.begin(), aux.end(), index) - aux.begin();
  int bf = ((idx == 0) ? index : (index - aux[idx - 1]));
  // VVVV this if == 30 score
  if (index == 0) {
    mData.insert(mData.begin(), value);
    aux.insert(aux.begin() , value.size());
    idx++;
  } 
  else if (index == mSize) 
  {
    mData.push_back(value);
    aux.push_back(aux.back());
    idx++;
  }
  // VVVV 2000 from magic number == 30 score
  else if (mData[idx].size() >= 2000)
  {
    std::vector<T> tmp(mData[idx].begin() + bf , mData[idx].end());
    mData[idx].erase(mData[idx].begin() + bf , mData[idx].end());
    aux[idx] -= tmp.size();
    mData.insert(mData.begin() + idx + 1 , value);
    aux.insert(aux.begin() + idx + 1, aux[idx]);
    mData.insert(mData.begin() + idx + 2 , tmp);
    aux.insert(aux.begin() + idx + 2, aux[idx] + tmp.size());
    idx++;
  }
  else
  {
    mData[idx].insert(mData[idx].begin() + bf, value.begin(), value.end());
  }
  while (idx < aux.size())
  {
      aux[idx] += value.size();
      idx++;
  }
  mSize += value.size();
  mCap += value.size();
}

#endif