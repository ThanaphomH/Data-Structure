#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data)
{
  // write your code here
  T *tmp = new T[mSize + data.size()]();
  sort(data.begin(), data.end());
  int j = 0;
  int cur = 0;
  for (int i = 0; i <= mSize; i++)
  {
    if (j < data.size() && i == data[j].first)
    {
      tmp[cur] = data[j].second;
      j++;
      cur++;
    }
    if (i < mSize)
    {
      tmp[cur] = mData[i];
      cur++;
    }
  }
  delete[] mData;
  mData = tmp;
  mSize += data.size();
  mCap += data.size();
}

#endif
