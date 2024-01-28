#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i=0;i<n;i++) cin >> nums[i];
    sort(nums.begin() , nums.end());
    for (int i=0;i<m;i++) {
        int x;
        cin >> x;
        int l=0,r=n-1;
        bool found = false;
        while(l<r) {
            if (nums[l] + nums[r] == x) {
                found = true;
                break;
            } else if (nums[l] + nums[r] > x) {
                r--;
            } else if (nums[l] + nums[r] < x) {
                l++;
            }
        }
        cout << ((found) ? "YES\n" : "NO\n");
    }
    return 0;
}