#include <iostream>
#include <vector>
#include <queue>
#define pii pair<int,int>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> st(n);
    for (int i=0;i<n;i++) {
        cin >> st[i];
    }
    vector<int> ans(m);
    auto cmp = [](const pii &b , const pii &a) {
        return (b.first > a.first);
    };
    priority_queue<pii , vector<pii>, decltype(cmp)> pq(cmp);
    int cur_t = 0;
    for (int i=0;i<n && i<m;i++) {
        pq.push({st[i],st[i]});
        cout << "0\n";
    }
    for (int i=0;i<m-n;i++) {
        auto p = pq.top();
        pq.pop();
        cout << p.first << "\n";
        pq.push({p.first+p.second , p.second});
    }
    return 0;
}