#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> p;
    for (int i=0;i<m;i++) {
        int x;
        cin >> x;
        p.push_back({x,i});
    }
    sort(p.begin() , p.end());
    int idx = 0;
    queue<int> pla,dot;
    vector<int> ans(m,-1);
    int cur_m = 0 , cnt = 0;
    for (int i=0;i<n;i++) {
        int cmd;
        cin >> cmd;
        if (cmd == 1) {
            int x,y;
            cin >> x >> y;
            // x = 1 ; pla , x = 2 ; dot
            if (x == 1) pla.push(y);
            else dot.push(y);
        } else {
            cnt += 1;
            if (pla.empty()) {
                cur_m += dot.front();
                dot.pop();
            } else if (dot.empty()) {
                cur_m += pla.front();
                pla.pop();

            } else {
                if (pla.front() <= dot.front()) {
                    cur_m += pla.front();
                    pla.pop();
                } else {
                    cur_m += dot.front();
                    dot.pop();
                }
            }
            while (idx < m && p[idx].first <= cur_m) {
                    ans[p[idx].second] = cnt;
                    idx += 1;
                }
        }
    }
    for (auto a : ans) cout << a << " ";
    return 0;
}