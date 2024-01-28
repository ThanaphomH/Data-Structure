#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,k,v;
    cin >> n >> k >> v;
    vector<int> vec(n);
    for (int i=0;i<n;i++) cin>>vec[i];
    if (n < 3) {
        for (int r=0;r<n;r++) {
        if (r == k) cout << v << " "; 
        cout << vec[r] << " "; 
    }
    }
    int i=k-1,j=k;
    int val = v;
    int cnt=1;
    bool ipass = true , jpass = true;
    bool destroyed = false;
    while (ipass || jpass) {
        if (i >= 0 && vec[i] == val) {
            cnt++;
            i--;
        } else {
            ipass = false;
        }
        if (j < n && vec[j] == val) {
            cnt++;
            j++;
        } else {
            jpass = false;
        }

        if (!(ipass || jpass) && cnt >= 3) {
            ipass = true;
            jpass = true;
            cnt = 0;
            destroyed = true;
            if (i < 0 || j >= n || vec[i] != vec[j]) break;
            val = vec[i];
            // if (vec[i] == vec[j]) val = vec[i];
            // else if (i < 0 && j < n) val = vec[j];
            // else if (i >= 0 && j >= n) val = vec[i];
            // else break;
        }
        cout << i << " " << j << " " << cnt << endl;
    }
    for (int r=0;r<n;r++) {
        if (destroyed && i < r && r < j) continue;
        if (!destroyed && r == k) cout << v << " "; 
        cout << vec[r] << " "; 
    }
    return 0;
}