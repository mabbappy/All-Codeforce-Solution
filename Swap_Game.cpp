#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int ar[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int mn = ar[0];
        for (int i = 1; i < n; i++)
        {
            if (ar[i] <= mn)
            {
                mn = ar[i];
            }
        }
        if (ar[0] != mn)
        {
            cout << "Alice" << endl;
        }
        else
            cout << "Bob" << endl;
    }
}