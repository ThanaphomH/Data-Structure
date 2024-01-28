#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T , int> maps;
    int cap = mCap;
    for (int i = mFront; i != (mFront + mSize) %cap ; i = (i+1)%cap) {
        maps[mData[i]] += 1;
    }
    std::vector<std::pair<T , size_t>> ans(k.size());
    for (int i=0;i<k.size();i++) {
        ans[i] = {k[i] , maps[k[i]]};
    }
    return ans;
}

#endif
