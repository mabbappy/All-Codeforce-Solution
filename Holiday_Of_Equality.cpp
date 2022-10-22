#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    int a[tt];
    for (int i = 0; i < tt; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 1; i < tt; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < tt; i++)
    {
        sum += max - a[i];
    }
    cout << sum << endl;
}