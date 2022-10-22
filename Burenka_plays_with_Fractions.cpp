#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Bappy21()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        a *= d;
        c *= b;
        if (a == c)
        {
            cout << "0" << endl;
        }
        else if (a == 0 || c == 0 || a % c == 0 || c % a == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
}
int main()
{
    Bappy21();
}