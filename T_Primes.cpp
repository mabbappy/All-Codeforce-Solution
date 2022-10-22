#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Bappy21()
{
    ll tt, x;
    int count, y;
    cin >> tt;
    while (tt--)
    {
        cin >> x;
        count = 0;
        y = sqrt(x);
        for (int i = 2; i * i <= y; i++)
        {
            if (y % i == 0)
                count++;
        }
        if ((x > 1) && !(x % y != 0) && (x / y == y) && (!count))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    Bappy21();
}