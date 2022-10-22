#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    long long a[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 4);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            c++;
        }
    }
    cout << c;
}