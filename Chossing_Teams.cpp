#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt, t;
    int c = 0;
    cin >> tt >> t;
    int a[tt];
    for (int i = 0; i < tt; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < tt; i++)
    {
        int x = (5 - a[i]);
        if ((x) >= t)
        {
            c++;
        }
    }
    cout << (c / 3) << endl;
}