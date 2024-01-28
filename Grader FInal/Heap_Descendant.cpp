#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n,a;
    cin >> n >> a;
    queue<int> q;
    vector<int> ans;
    q.push(a);
    while (!q.empty()) {
        ans.push_back(q.front());
        int c = q.front()*2+1;
        q.pop();
        for (int i=0;i<2;i++) {
            if (c+i < n) {
                q.push(c+i);
            }
        }
    }
    cout << ans.size() << "\n";
    for (int i=0;i<ans.size();i++) cout << ans[i] << " ";
    return 0;
}
