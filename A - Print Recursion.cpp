#include <bits/stdc++.h>

using namespace std;
void solve(int n)
{
    if (n > 0)
        cout << "I love Recursion" << '\n';
    if (n >= 0)
        solve(n - 1);
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}