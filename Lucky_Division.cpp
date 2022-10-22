#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 4 == 0 || a % 7 == 0 || a % 47 == 0 || a % 74 == 0 || a % 447 == 0 || a % 477 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}