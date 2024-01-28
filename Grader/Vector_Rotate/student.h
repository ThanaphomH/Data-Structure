#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  T *tmp = new T[k]();
  for (int i=0;i<k;i++) {
    tmp[i] = (*(first + i));
    // std::cout << (*(first + i)) << " ";
  }
  // std::cout << "mData: " << std::endl;
  // for (int i=0;i<mSize;i++) std::cout << mData[i] << " ";
  // std::cout << std::endl;

  // std::cout << "tmp: " << std::endl;
  // for (int i=0;i<k;i++) std::cout << tmp[i] << " ";
  // std::cout << std::endl;

  int j = 0;
  for (auto it = first; it != last; it++) {
    int idx = it - &mData[0];
    if (idx < ((last - &mData[0]) - k)) mData[idx] = mData[idx+k];
    else {
      mData[idx] = tmp[j];
      j++;
    }
  }
}

#endif
