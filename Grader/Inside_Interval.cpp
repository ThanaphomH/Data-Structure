#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    set<pair<int,int>> s;
    for (int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        s.insert({x,y});
    }
    for (int i=0;i<m;i++) {
        int x;
        cin >> x;
        auto it = s.lower_bound({x,x});
        auto bit = it--;
        cout << (((it->first <= x && x <= it->second) || (bit->first <= x && x <= bit->second)) ? "1 " : "0 ");
    }
    return 0;
}