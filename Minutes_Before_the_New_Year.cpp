#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int h, m;
        cin >> h >> m;
        cout << (1440) - ((h * 60) + m) << endl;
    }
}