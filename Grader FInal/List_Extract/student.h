#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here

  auto it = a;
  while (it != b && it != end()) {
    if (it.ptr->data == value) {
      auto pit = it.ptr;
      auto tmp = pit->next;

      pit->next->prev = pit->prev;
      pit->prev->next = pit->next;

      pit->next = output.begin().ptr;
      pit->prev = output.mHeader;

      output.begin().ptr->prev = pit;
      output.mHeader->next = pit;

      mSize--;
      output.mSize++;
      it = tmp;
    } else {
      it++;
    }
  }

}

#endif
