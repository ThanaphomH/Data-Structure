#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    cout << std::fixed << std::setprecision(2);
    int n;
    cin >> n;
    map<string,pair<int,int>> prof;
    map<string,pair<int,int>> clas;
    for (int i=0;i<n;i++) {
        string s,t;
        int val;
        cin >> s >> t >> val;
        clas[s].first += val;
        clas[s].second += 1;
        prof[t].first += val;
        prof[t].second += 1;
    }
    for (auto p : clas) cout << p.first << " " << (p.second.first + 0.0) / p.second.second << "\n";
    for (auto p : prof) cout << p.first << " " << (p.second.first + 0.0) / p.second.second << "\n";
    return 0;
}