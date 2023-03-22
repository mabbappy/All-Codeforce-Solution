#include <bits/stdc++.h>
using namespace std;
int n;
int Bappy21(int x)
{
    if (x % 2 == 1)
        return x / 2 + 1;
    else
        return n * n - (x / 2) + 1;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i % 2 == 1)
                {
                    cout << Bappy21((i - 1) * n + j) << " ";
                }
                else
                {
                    cout << Bappy21(((i - 1) * n + (n + 1 - j))) << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}