#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <string>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
  stack<int> num;
  for (auto p : v) {
    if (p.first == 1) num.push(p.second);
    else {
            int y = num.top();
            num.pop();
            int x = num.top();
            num.pop();
            if (p.second == 0) num.push(x+y);
            else if (p.second == 1) num.push(x-y);
            else if (p.second == 2) num.push(x*y);
            else if (p.second == 3) num.push(x/y);
        }

  }
  return num.top();
}

#endif
