#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << min(even, odd) << '\n';
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}