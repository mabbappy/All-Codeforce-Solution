#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c = 0;
    cin >> s;
    int x = s.size();
    for (int i = 0; i < x; i++)
    {
        if (s[i] == 'H' || s[i] == '9' || s[i] == 'Q')
        {
            c++;
        }
    }
    if (c == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}