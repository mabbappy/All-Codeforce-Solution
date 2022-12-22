#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int flag = 0;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        int f = 1;
        if (flag == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                f *= i;
            }
            cout << f << endl;
        }
        else
            cout << "-1" << endl;
    }
}