#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    while(m--) {
        int a,b;
        cin >> a >> b;
        if (a == b) {
            cout << "a and b are the same node\n";
            continue;
        }

        bool swapp = false;
        if (b > a) {
            swap(a,b);
            swapp = true;
        }
        bool is_parent = false;
        int pa = a;
        int ha = floor(log2(a+1));
        int hb = floor(log2(b+1));
        while (ha >= hb) {
            if (pa == b) {
                is_parent = true;
                break;
            }
            if (pa == 0) break;
            pa = (pa%2 == 1) ? (((pa+1)/2)-1) : (pa/2)-1;
            ha = floor(log2(pa+1));
        }
        
        if (is_parent && !swapp) {
            cout << "b is an ancestor of a\n";
        }
        else if (is_parent && swapp) {
            cout << "a is an ancestor of b\n";
        }
        else {
            cout << "a and b are not related\n";
        }
    }
}