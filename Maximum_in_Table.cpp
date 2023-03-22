/**
 *Bismillah Hir Rahmanir Rahim
 *Rahman Zahagir Vorosa!
 *author:mabbappy
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ar[n + 1][n + 1];
    for (int i = 0, j = 0; j < n; j++)
    {
        ar[i][j] = 1;
    }
    for (int i = 0, j = 0; i < n; i++)
    {
        ar[i][j] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            ar[i][j] = ar[i - 1][j] + ar[i][j - 1];
        }
    }
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }*/
    cout << ar[n - 1][n - 1] << endl;
}
