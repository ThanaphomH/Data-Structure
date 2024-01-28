#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    int sp = 1;
    while (sp < n) sp *= 2;
    cout << sp - n;
    return 0;
}