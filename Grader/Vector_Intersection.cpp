#include <iostream>
#include <set>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    set<int> v1,v2;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        v1.insert(x);
    }
    for (int i=0;i<m;i++) {
        int x;
        cin >> x;
        v2.insert(x);
    }
    auto i1 = v1.begin();
    auto i2 = v2.begin();
    while (i1 != v1.end() && i2 != v2.end()) {
        if (*i1 == *i2) {
            cout << *i1 << " ";
            i1++;
            i2++;
        } else {
            if (*i1 < *i2) i1++;
            else i2++;
        }
    }
    return 0;
}