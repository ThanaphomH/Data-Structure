#include<bits/stdc++.h>
using namespace std;
int main() {
    int h,m,x;
    cin >> h >> m >> x;
    m += x;
    h += (m/60);
    m %= 60;
    h %= 24;
    cout << ((h < 10) ? "0" + to_string(h) : to_string(h)) << " " << ((m < 10) ? "0" + to_string(m) : to_string(m)) ;
    return 0;
}