#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    unordered_map<int,int> m;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        m[x] += 1;
    }
    bool dup = false;
    for (auto p : m) {
        if (p.second > 1 || p.first > n) {
            dup = true;
            break;
        }
    }
    cout << ((dup) ? "NO" : "YES");
    return 0;
}