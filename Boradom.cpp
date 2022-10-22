#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    int c = 0;
    while (tt--)
    {
        int a;
        cin >> a;
        c++;
    }
    if (c % 2 == 0)
    {
        cout << c;
    }
    else
    {
        cout << c + 1;
    }
}