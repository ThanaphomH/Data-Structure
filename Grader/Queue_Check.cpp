#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int mFront, mSize, mCap, last;
        cin >> mFront >> mSize >> mCap >> last;
        int corr;
        cin >> corr;
        bool is_corr = ((mFront + mSize) % mCap == last && mCap == ((mFront < last) ? (last + 1) : (mSize - last + mFront)));
        cout << ((is_corr) ? "OK" : "WRONG");
        if (!is_corr)
        {
            switch (corr)
            {
            case 1:
                mFront = (last - mSize + mCap) % mCap;
                cout << " " << mFront;
                break;
            case 2:
                mSize = (last - mFront + mCap) % mCap;
                cout << " " << mSize;
                break;
            case 3:
                mCap = (mFront < last) ? (last + 1) : (mSize - last + mFront);
                cout << " " << mCap;
                break;
            case 4:
                last = (mFront + mSize) % mCap;
                cout << " " << last;
                break;
            default:
                break;
            }
        }

        cout << "\n";
        // cout << corr_size << "\n";
    }
    return 0;
}