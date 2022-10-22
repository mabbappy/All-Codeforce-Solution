#include <bits/stdc++.h>
using namespace std;
void Bappy21()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        if (n == 3)
            cout << "-1\n";
        else
        {
            cout << n << ' ' << n - 1 << ' ';
            for (int i = 1; i < n - 1; ++i)
            {
                cout << i << ' ';
            }
            cout << "\n";
        }
    }
}
int main()
{
    Bappy21();
    return 0;
}