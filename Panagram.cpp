#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    char c;
    cin >> tt;
    set<char> s;
    for (int i = 1; i <= tt; i++)
    {
        cin >> c;
        s.insert(tolower(c));
    }
    if (s.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}