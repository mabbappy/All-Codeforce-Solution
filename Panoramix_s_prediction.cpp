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
    int n, m;
    cin >> n >> m;
    int prime[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    for (int i = 0; i < 15; i++)
    {
        if (prime[i] == n)
        {
            if (prime[i + 1] == m)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
            break;
        }
    }
}