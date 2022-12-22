/*
**author:mabbappy
**date:21 Nov,22
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    int C = 0, M = 0, y = 0;
    cin >> n >> m;
    char c;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> c;
            if (c == 'C')
            {
                C = 1;
            }
            else if (c == 'Y')
            {
                y = 1;
            }
            else if (c == 'M')
            {
                M = 1;
            }
        }
    }
    if (C == 1 or y == 1 or M == 1)
    {
        cout << "#Color" << endl;
    }
    else
        cout << "#Black&White" << endl;
}