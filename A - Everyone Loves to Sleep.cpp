#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int N, hh, mm;
        cin >> N >> hh >> mm;
        int xm = 1e9;
        while (N--)
        {
            int h, m;
            cin >> h >> m;
            int cunt = 0;
            int H = hh;
            int M = mm;
            while (1)
            {
                if (H == h and M == m)
                    break;
                M++, cunt++;
                if (M == 60)
                {
                    M = 0;
                    H++;
                    if (H == 24)
                        H = 0;
                }
            }
            xm = min(cunt, xm);
        }
        cout << xm / 60 << " " << xm % 60 << '\n';
    }
}