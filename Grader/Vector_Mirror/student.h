#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  int j=size() - 1;
  resize(2 * size());
  for (int i = j+1; i < size();i++) {
    mData[i] = mData[j];
    j--;
  }
}

#endif
