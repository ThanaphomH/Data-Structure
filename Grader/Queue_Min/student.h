#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include <set>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  std::set<T, decltype(comp)> s(comp);
  int i=0;
  int ms = mSize, mf = mFront, mc = mCap;
  while (i < pos.size()) {
    if (pos[i] < ms) {
      s.insert(mData[(mf + pos[i])%mc]);
    }
    i++;
  }
  return *s.begin();
}

#endif
