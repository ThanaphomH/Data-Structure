#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <queue>
#include <math.h>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::find(T k) const
{
    // your code here
    std::queue<int> q;
    q.push(0);
    if (mData[0] == k) return true;
    while (!q.empty())
    {
        int c = (q.front() * 2 + 1);
        q.pop();
        if (c >= mSize) continue;
        for (int i=0;i<2;i++) {
            if (c+i < mSize && mLess(k ,mData[c+i])) q.push(c+i);
            if (k == mData[c+i]) return true;
        }
    }
    return false;
}

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::find_level(T k) const
{
    // your code here
    std::queue<int> q;
    q.push(0);
    int ans = -1;
    while (!q.empty())
    {
        if (k == mData[q.front()]) ans = std::max(ans , int(log2(q.front() + 1)));
        int c = (q.front() * 2 + 1);
        q.pop();
        if (c >= mSize) continue;
        for (int i=0;i<2;i++) {
            if (c+i < mSize && mLess(k ,mData[c+i]) || mData[c+i] == k) q.push(c+i);
        }
    }
    return ans;
}

#endif
