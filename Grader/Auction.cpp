#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <queue>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,a;
    cin >> n >> m >> a;
    vector<unordered_map<int,int>> maps(n);
    vector<int> cn(n);
    for (int i=0;i<n;i++) {
        cin >> cn[i];
    } 
    for (int i=0;i<a;i++) {
        char command;
        int u,item,val;
        cin >> command;
        if (command == 'B') {
            cin >> u >> item >> val;
            maps[--item][--u] = val;
        } 
        else if (command == 'W') {
            cin >> u >> item;
            maps[--item].erase(--u);
        }
    }
    unordered_map<int , vector<int>> ans;
    for (int i=0;i<n;i++) {
        if (maps[i].size() == 0) continue;
        priority_queue<pair<int,int> , vector<pair<int,int>>> pq;
        for (auto p : maps[i]) pq.push({p.second , p.first});
        while (cn[i] != 0 && !pq.empty()) {
            pair<int,int> win = pq.top();
            pq.pop();
            ans[win.second].push_back(i+1);
            cn[i]--;
        }
    }
    for (int i=0;i<m;i++) {

        if (ans[i].empty()) cout << "NONE\n";
        else {
            for (auto i : ans[i]) cout << i << " ";
            cout << "\n";
        }
    }
    return 0;
}