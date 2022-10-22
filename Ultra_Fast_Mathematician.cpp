#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1;
    cin >> s >> s1;
    int x = s.size();
    for (int i = 0; i < x; i++)
    {
        cout << abs(s[i] - s1[i]);
    }
}