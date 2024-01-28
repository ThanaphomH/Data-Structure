#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> v;
    while (t--) {
        string com;
        cin >> com;
        if (com == "pb") {
            int x;
            cin >> x;
            v.push_back(x);
        } else if (com == "sa") {
            sort(v.begin() , v.end());
        } else if (com == "sd") {
            sort(v.begin() , v.end(), greater<int>());
        } else if (com == "r") {   
            int l=0 , r=v.size()-1;
            while(l < r){
                swap(v[l],v[r]);
                l++;
                r--;
            } 
        } else if (com == "d") {
            int i;
            cin >> i;
            v.erase(v.begin() + i);
        }
    }
    for (auto val : v) cout << val << " ";
    return 0;
}