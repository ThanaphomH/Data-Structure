#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    map<string,int> s;
    for (int i=0;i<n;i++) {
        string m;
        cin >> m;
        s[m] += 1;
    }
    for (auto p : s) {
        if (p.second > 1) cout << p.first << " " << p.second << "\n";
    }
    return 0;
}