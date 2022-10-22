#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    string s;
    map<string, int> a;
    cin >> tt;
    while (tt--)
    {
        cin >> s;
        a[s]++;
        if (a[s] == 1)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << a[s] - 1 << endl;
        }
    }
}