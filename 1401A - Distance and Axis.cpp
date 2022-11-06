#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n >> k;
        if (n > k)
        {
            d = n - k;
            if (d % 2 == 0)
                cout << 0 << "\n";
            else
                cout << 1 << endl;
        }
        else
            cout << k - n << "\n";
    }
    return 0;
}