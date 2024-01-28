#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  //std::cout << a - begin()  << " " << b - begin() << " " << m << " " << mSize << std::endl; 
  if (m <= 0 || !(begin() <= a && a < end()) || !(begin() <= b && b < end()) || (a <= b && a + m > b) || (b <= a && b + m > a) || (a + m > end()) || (b + m > end())) return false;
  for (int i=0;i<m;i++) {
    std::swap(*(a + i) , *(b + i));
  }
  return true;
}

#endif
