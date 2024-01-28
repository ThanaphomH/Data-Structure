#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> maps;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        maps[x] += 1;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        bool found = false;
        for (auto &num : maps)
        {
            // maps[x - num.first] > 0
            if (maps.count(x - num.first))
            {
                if (x - num.first == num.first && maps[x - num.first] < 2)
                    continue;
                found = true;
                break;
            }
        }

        cout << ((found) ? "YES\n" : "NO\n");
    }
    return 0;
}