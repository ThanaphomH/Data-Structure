#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  // int ans = 0;
  // while (pos > 0) {
  //   int c = (((pos-1)/2)*2 + 1) == pos ? c+1 : c;
  //   if (c < mSize) {

  //   }
  //   ans++;
  //   pos = (pos-1)/2;
  // }
  int ans = 0;
  int i = 0;
  while ( i < mSize) {
    if (mLess(mData[pos] , mData[i])) ans++;
    i++;
  }
  return ans;
}

#endif
