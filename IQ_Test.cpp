/**
 *Bismillah Hir Rahmanir Rahim!
 *Rahman ZAHAGIR Vorosa!
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
    int ar[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
        {
            even++;
        }
        else
            odd++;
    }
    if (even > odd)
    {
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 != 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}