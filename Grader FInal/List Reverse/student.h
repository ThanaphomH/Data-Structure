#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b)
{
  // write your code here
  if (a == b || mSize == 0)
    return a;
  b--;
  node *l = a.ptr, *r = b.ptr;
  while (!(r->next == l || l == r))
  {
    std::cout << l->data << " " << r->data << " ";
    if (l->next != r)
    {
      l->prev->next = r;
      r->prev->next = l;
      node *tmp = l->next;
      l->next = r->next;
      r->next = tmp;

      l->next->prev = l;
      r->next->prev = r;
      tmp = l->prev;
      l->prev = r->prev;
      r->prev = tmp;
    } else {
      l->prev->next = r;
      l->next = r->next;
      r->next = l;

      l->next->prev = l;
      r->prev = l->prev;
      r->next->prev = r;
      break;
    }
    node *tmp = l->prev;
    l = r->next;
    r = tmp;
  }
  return b;
}

#endif
