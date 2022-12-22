/*
**author:mabbappy
**date:21 Nov,22
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int ar[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + 3);
        cout << ar[1] << endl;
    }
}