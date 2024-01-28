#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int cur_space = mCap - mSize;
    int other_space = other.mCap - other.mSize;
    if (cur_space < other_space) return -1;
    else if (cur_space == other_space) return 0;
    else return 1;
}

#endif
