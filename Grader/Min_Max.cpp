#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <set>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> val(n);
    unordered_map<int,int> maps;
    set<pair<int,int>> s; // type, val
    for (int i=0;i<m;i++) {
        maps[i] = 1;
        s.insert({1,i});
    }
    for (int i=0;i<n;i++) {
        cin >> val[i];
    }
    for (int i=0;i<n;i++) {
        int ty;
        cin >> ty;
        s.erase({maps[ty],ty});
        maps[ty] = max(maps[ty] , val[i]);
        s.insert({maps[ty],ty});
        cout << s.begin()->first << " ";
    }
    return 0;
}