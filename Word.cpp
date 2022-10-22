#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c = 0, m = 0, i;
    cin >> s;
    int x = s.size();
    for (int i = 0; i < x; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            c++;
        }
        else
        {
            m++;
        }
    }
    for (int i = 0; i < x; i++)
    {
        if (m > c)
        {
            s[i] = toupper(s[i]);
        }
        else if (c >= m)
        {
            s[i] = tolower(s[i]);
        }
        cout << s[i];
    }
    return 0;
}