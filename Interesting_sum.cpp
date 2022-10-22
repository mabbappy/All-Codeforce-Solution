#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a;
        cin >> a;
        int ar[a];
        for (int i = 0; i < a; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + a);
        cout << (ar[a - 1] - ar[0]) + (ar[a - 2] - ar[1]) << endl;
    }
}