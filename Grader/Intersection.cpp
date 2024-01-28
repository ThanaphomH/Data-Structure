#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    vector<int> v1(n) , v2(m);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    for (int i=0;i<m;i++) {
        cin >> v2[i];
    }
    sort(v1.begin() , v1.end());
    sort(v2.begin() , v2.end());
    int i=0,j=0;
    set<int> s;
    while (i < n && j < m) {
        if (v1[i] == v2[j]) {
            s.insert(v1[i]);
            i += 1;
            j += 1;
        } else {
            if (v1[i] < v2[j]) i += 1;
            else j += 1;
        }
    }
    for (auto &x : s) cout << x << " ";
    return 0;
}