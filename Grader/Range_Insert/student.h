#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last)
{
  // write your code here
  int ins_size = last - first;
  // vvvvvvvvvvvvvvvvvvvvvvvvvvv !!!!!!!! after resize, position changed so need to find pos_idx before resize
  int pos_idx = position-begin();
  resize(mSize + ins_size);
  for (int i = mSize - 1; i >= pos_idx + ins_size; i--)
  {
    mData[i] = mData[i - ins_size];
  }
  for (int i = 0; i < ins_size; i++)
  {
    mData[pos_idx + i] = *(first + i);
  }

}

#endif
