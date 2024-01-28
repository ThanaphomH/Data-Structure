#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    map<int,int> maps;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        maps[x] += 1;
    }
    int round = 1;
    for (int i=0;i<m;i++) {
        bool lose_round = false;
        int t;
        cin >> t;
        while (t--) {
            int en;
            cin >> en;
            auto it = maps.lower_bound(en);
            if (it->first == en) it++;
            if (it != maps.end()) {
                it->second -= 1;
                if (it->second == 0) maps.erase(it->first);
            } else {
                lose_round = true;
            }
        }
        if (lose_round) {
            break;
        } else round++;
    }
    cout << round;
    return 0;
}