#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  //your code here
  int cnt = 0;
  node* it = mHeader;
  bool d = false;
  bool check = true;
  while (check) {
    if (it == mHeader && d) break;

    if (it != NULL && it->next != NULL && it->next->prev == it) {
      it = it->next;
      cnt++;
    } else {
      check = false;
      break;
    }
    d = true;
  }
  return check && (cnt-1 == mSize);
}


#endif
