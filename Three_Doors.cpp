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
        int ar[5];
        cin >> ar[1] >> ar[2] >> ar[3];
        if (a == 0 || ar[a] == 0 || ar[ar[a]] == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}