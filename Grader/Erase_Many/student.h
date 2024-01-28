#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  int pt = 0;
  int cur = 0;
  for (int i=0;i<mSize;i++) {
    if (pt < pos.size() && i == pos[pt]) {
      pt++;
    } else {
      mData[cur] = mData[cur + pt];
      cur++;
    }
  }
  mSize -= pos.size();
}

#endif
