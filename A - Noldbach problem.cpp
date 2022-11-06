#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, indx = 0;
    cin >> n >> k;
    bool array[1000];
    for (int i = 2; i <= 1000; i++)
        array[i] = true;
    vector<int> vec;
    for (int i = 2; i <= 1000; i++)
    {
        if (array[i] == true)
        {
            if (i <= n)
                indx++;
            vec.push_back(i);
            for (int j = i; j <= 1000; j = j + i)
            {
                array[j] = false;
            }
        }
    }
    int cunt = 0;
    for (int i = 0; i <= indx; i++)
    {
        int sum = vec[i] + vec[i + 1] + 1;
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] == sum && sum <= n)
            {
                cunt++;
                break;
            }
        }
    }
    if (cunt >= k)
        cout << "YES\n";
    else
        cout << "NO\n";
}