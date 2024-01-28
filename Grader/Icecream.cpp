#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, start;
    cin >> n >> m >> start;
    vector<int> tsum(100001,0);
    tsum[0] = start;
    int adder = start;
    for (int i = 0; i < n; i++)
    {
        int ns, v;
        cin >> ns >> v;
        tsum[ns] = v;
    }
    for (int i=1 ;i<=100001 ;i++) {
        if (tsum[i] != 0) adder = tsum[i];
        tsum[i] = tsum[i-1] + adder;
    }
    for (int i = 0; i < m; i++)
    {
        int v, da;
        cin >> v >> da;
        if (tsum[da] < v) {
            cout << lower_bound(tsum.begin() , tsum.end() , v + tsum[da]) - tsum.begin() << " ";
        } else {
            cout << lower_bound(tsum.begin() , tsum.end() , v) - tsum.begin() << " ";
        }
    }
    return 0;
}