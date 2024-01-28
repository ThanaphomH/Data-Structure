#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string , int> s;
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        string a;
        cin >> a;
        s[a] += 1;
    }
    string out;
    int maxx = 0;
    for (auto &item : s) {
        if (item.second >= maxx) {
            maxx = item.second;
            out = item.first;
        }
    }
    cout << out << " " << maxx;
    return 0;
}