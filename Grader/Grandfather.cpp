#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    unordered_map<long long int , long long int> parent;
    for (int i=0;i<n;i++) {
        long long int f,s;
        cin >> f >> s;
        parent[s] = f;
    }
    for (int i=0;i<m;i++) {
        long long int v1,v2;
        cin >> v1 >> v2;
        bool is_sibling = false;
        if (v1 != v2) {
            if (parent[parent[v1]] == parent[parent[v2]] && parent[parent[v1]] != 0 && parent[parent[v2]] != 0) is_sibling = true;
        }
        cout << ((is_sibling) ? "YES\n" : "NO\n");
    }
    return 0;
}