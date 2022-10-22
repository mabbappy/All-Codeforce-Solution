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
        int mx = 0;
        int x, c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (mx < x)
            {
                mx = x;
                c = i + 1;
            }
        }
        cout << c << endl;
    }
}
int main()
{
    Bappy21();
}