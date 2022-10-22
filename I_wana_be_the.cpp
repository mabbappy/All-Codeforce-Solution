#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt, a, b, c, d;
    set<int> s;
    cin >> tt;
    cin >> a;
    while (a--)
    {
        cin >> b;
        s.insert(b);
    }
    cin >> c;
    while (c--)
    {
        cin >> b;
        s.insert(b);
    }
    if (s.size() == tt)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}