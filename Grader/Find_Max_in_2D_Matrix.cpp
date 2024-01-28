#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,t;
    cin >> n >> m >> t;
    vector<vector<int>> mat;
    for (int i=0;i<n;i++) {
        vector<int> temp;
        for (int j=0;j<m;j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        mat.push_back(temp);
    }
    while (t--) {
        int l1,r1,l2,r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if (l2 < l1 || r2 < r1) cout << "INVALID" << endl;
        else if (l1 > n || r1 > m) cout << "OUTSIDE" << endl;
        else {
            l1--;
            l2--;
            r1--;
            r2--;
            int out = INT_MIN;
            for (int i=l1;i<=l2;i++) {
                for (int j=r1;j<=r2;j++) {
                    out = max(out,mat[i][j]);
                    if (j+1 >= m) break;
                }
                if (i+1 >= n) break;
            }
            cout << out << endl;
        }
    }
    return 0;
}