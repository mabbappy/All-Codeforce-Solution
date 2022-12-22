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
        int n;
        cin >> n;
        int ar[n + 5];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int mn = ar[0], mx = ar[0], second_mx = 0;
        ;
        for (int i = 1; i < n; i++)
        {
            if (ar[i] > mx)
            {
                mx = ar[i];
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (ar[i] < mn)
            {
                mn = ar[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] >= mn and ar[i] < mx)
            {
                second_mx = ar[i];
            }
        }
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] != mx)
            {
                x = ar[i] - mx;
                v.push_back(x);
            }
            else if (mx == mn)
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(mx - second_mx);
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}