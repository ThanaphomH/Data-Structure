#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,l;
    cin >> n >> m >> l;
    vector<int> k(l);
    for (int i=0;i<l;i++) cin >> k[i];
    set<string> s;
    for (int i=0;i<n;i++) {
        string x;
        cin >> x;
        string y = "";
        for (int i=0;i<l;i++) {
            char c = x[i];
            y += (((c-'a') + 26 - k[i]) % 26) + 'a';
        }
        s.insert(y);
    }
    for (int i=0;i<m;i++) {
        string x;
        cin >> x;
        cout << ((s.count(x)) ? "Match\n" : "Unknown\n");
    }
    return 0;
}