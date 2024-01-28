#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  int i = 0;
  while (!empty() && i < K) {
    pop();
    i++;
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::vector<T> tmp;
  int i = 0;
  while (!empty() && i < K) {
    tmp.push_back(top());
    pop();
    i++;
  }
  std::stack<T> ans;
  for (int i=tmp.size()-1;i>=0;i--) ans.push(tmp[i]);
  return ans;
}

#endif
