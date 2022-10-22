#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long a;
        cin >> a;
        long long c = 0;
        if (a == 1)
        {
            c = 2;
        }
        else
        {
            c = ceil(a / 3.0);
        }
        cout << c << endl;
    }
}
