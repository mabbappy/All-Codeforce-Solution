#include <bits/stdc++.h>
using namespace std;

void Bappy21()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d = abs(c - b) + c;
        if (a > d)
        {
            cout << 2 << endl;
        }
        else if (a < d)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
}
int main()
{
    Bappy21();
}