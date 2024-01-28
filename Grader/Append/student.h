#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        if (s.mSize == 0) return;
        ensureCapacity(mSize + s.mSize);
        int ssi = s.mSize;
        for (int i=mSize+ssi-1; i >= ssi; i--) {
            mData[i] = mData[i-ssi];
        }
        for (int i=ssi-1;i>=0;i--) {
            mData[i] = s.top();
            s.pop();
        }
        mSize += ssi;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        if (q.mSize == 0) return;
        ensureCapacity(mSize + q.mSize);
        int qsi = q.mSize;
        for (int i=mSize+qsi-1; i >= qsi; i--) {
            mData[i] = mData[i-qsi];
        }
        for (int i=qsi-1;i>=0;i--) {
            mData[i] = q.front();
            q.pop();
        }
        mSize += qsi;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        int last = (int)(s.mSize)-1;
        for (int i=last; i>= 0; i--) {
            push(s.mData[i]);
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        int last = (q.mFront + q.mSize) % (int)(q.mCap);
        if (q.mSize == 0) return;
        push(q.mData[q.mFront]);
        for (int i=(q.mFront+1)%((int)(q.mCap)); i != last ; i = (i+1)%((int)(q.mCap))) {
            push(q.mData[i]);
        }
    }
}
