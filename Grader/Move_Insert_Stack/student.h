#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m)
{
  // your code here
  int p_size = (m >= s2.size()) ? s2.size() : m;
  expand(size() + p_size);
  int i = size() + p_size - 1;
  int ik = size() - 1;
  while (ik >= 0)
  {
    if (ik == size() - 1 - k)
    {
      for (int r = 0; r < p_size; r++)
      {
        T tmp = s2.top();
        s2.pop();
        mData[i] = tmp;
        i--;
      }
    }
    mData[i] = mData[ik];
    ik--;
    i--;
  }
  if (size() - 1 - k == -1)
  {
    for (int r = 0; r < p_size; r++)
    {
      T tmp = s2.top();
      s2.pop();
      mData[i] = tmp;
      i--;
    }
  }
  mSize += p_size;
}
#endif
