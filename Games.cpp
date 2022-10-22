#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    int a[tt], b[tt], x = 0, c = 0;
    for (int i = 0; i < tt; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < tt; i++)
    {
        for (int j = 0; j < tt; j++)
        {
            if (a[i] == b[j])
            {
                x++;
            }
        }
    }
    cout << x;
}