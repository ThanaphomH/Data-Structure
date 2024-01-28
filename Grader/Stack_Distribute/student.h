#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const
{
  // write your code here
  std::vector<std::vector<T>> v;
  int pk = mSize / k;
  int lef = mSize % k;
  int cur = mSize - 1;
  for (int i = 0; i < k; i++)
  {
    v.push_back(std::vector<T>());
    int check = pk;
    if (i < lef) check++;
    for (int j = 0; j < check; j++)
    {
      v[i].push_back(mData[cur]);
      cur--;
    }
  }
  return v;
}
#endif
