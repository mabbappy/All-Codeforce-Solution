#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = s.size();
    int c = 1, d = 1;
    for (int i = 0; i < x - 1; i++)
    {
        if (s[i] != s[i + 1] || d == 5)
        {
            c++;
            d = 1;
        }
        else
        {
            d++;
        }
    }
    cout << c << endl;
}