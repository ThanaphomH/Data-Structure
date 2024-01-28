#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    multiset<int> s;
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        s.insert(v[i]);
        if (i >= w)
        {
            auto it = s.begin();
            for (int j=0;j<(w/2);j++) it++;
            cout << *it << " ";
            s.erase(s.find(v[i - w]));
        }
    }
    return 0;
}