#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,k;
    cin >> n >> k;
    unordered_map<string,int> m;
    for (int i=0;i<n;i++) {
        string name;
        cin >> name;
        m[name] += 1;
    }
    vector<int> cnt;
    for (auto it : m) {
        cnt.push_back(it.second);
    }
    sort(cnt.begin() , cnt.end() , greater<int>());
    if (k >= cnt.size()) cout << cnt[cnt.size() - 1];
    else cout << cnt[k-1];
    return 0;
}