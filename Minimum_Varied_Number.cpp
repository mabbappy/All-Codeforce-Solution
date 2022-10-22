#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i = 9;
        cin >> n;
        m = n;
        while (m > i)
        {
            m = m - i;
            i--;
        }
        cout << m;
        i++;
        while (i <= 9)
        {
            cout << i;
            i++;
        }
        cout << "\n";
    }
}