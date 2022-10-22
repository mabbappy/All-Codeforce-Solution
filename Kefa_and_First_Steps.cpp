#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 1, x = 1;
    cin >> n;
    long long a[100010];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] >= a[i])
        {
            c = max(++x, c);
        }
        else
        {
            x = 1;
        }
    }
    cout << c;
}