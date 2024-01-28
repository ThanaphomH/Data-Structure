#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long n,k;
    cin >> n >> k;
    if (n == 1) {
        cout << 0;
    }
    else if (k == 1) {
        cout << n-1;
    } else {
        long long cnt = 0;
        long long pw = 0;
        while (cnt < n) { 
            cnt += pow(k , pw);
            pw += 1;
        }
        cout << pw-1;
    }
    return 0;
}
