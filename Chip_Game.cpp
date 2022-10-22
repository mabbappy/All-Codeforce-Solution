#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll a, b;
        cin >> a >> b;
        ll c = 0;
        if (a % 2 == 0)
        {
            c++;
        }
        if (b % 2 == 0)
        {
            c++;
        }
        if (c % 2 != 0)
        {
            cout << "Burenka" << endl;
        }
        else
        {
            cout << "Tonya" << endl;
        }
    }
}