#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> num(n);
    for (int i=0;i<n;i++) cin >> num[i];
    sort(num.begin() , num.end());
    for (int i=0;i<m;i++) {
        int ask;
        cin >> ask;
        int l = ask-k , r = ask+k;
        auto lit = lower_bound(num.begin() , num.end() , l);
        auto rit = lower_bound(num.begin() , num.end() , r);
        if (*rit != ask+k) rit--;
        if (lit > rit) cout << 0 << " ";
        else {
            cout << rit - lit + 1 << " ";
        }
    }
    return 0;
}