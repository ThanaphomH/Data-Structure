#include <iostream>
#include <vector>
using namespace std;
int cnt_height(long long &k, long long a) {
    int cnt = 0;
    while (a > 0) {
        a = (a-1) / k;
        cnt++;
    }
    return cnt;
}

int relation(long long k, long long a, long long b)
{
    if (b < a) swap(a, b);
    int ha = cnt_height(k,a);
    int hb = cnt_height(k,b);

    long long c = b;
    int fp = 0;
    bool _isParent = false, _isAn = false;
    while (c > a) {
        c = (c - 1) / k;
        if (c == a) {
            if (fp == 0) _isParent = true;
            _isAn = true;
            break;
        }
        fp += 1;
    }
    if (_isParent) return 1;
    if (_isAn) return 2;
    if (ha == hb) return 4;
    else return 3;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    long long k, a, b;
    cin >> n;
    while (n--)
    {
        cin >> k >> a >> b;
        cout << relation(k, a, b) << " ";
    }
    cout << endl;
}