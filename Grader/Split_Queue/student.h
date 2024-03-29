#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
    std::vector<CP::queue<T> > qs(k);
    int j=0;
    int s = size();
    for(int i=0;i<s;i++) {
        qs[j].push(front());
        pop();
        j = (j+1)%k;
    }
    return qs;
}

#endif

