#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            swap(a, b);
        }
        int x = max(a, b * 2);
        cout << x * x << endl;
    }
}