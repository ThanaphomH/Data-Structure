#include <iostream>
#include <vector>
#include <set>
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
        int x,y;
        cin >> x >> y;
        auto it = s.lower_bound({x,y});
        if (!(it->first == x && it->second == y)) {
            if (it == s.begin()) {
                cout << "-1 -1 ";
            } else {
                it--;
                cout << it->first << " " << it->second << " ";
            }
        } else {
            cout << "0 0 ";
        }
        
    }
    return 0;
}