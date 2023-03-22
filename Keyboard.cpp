/**
 *Bismillah Hir Rahmanir Rahim
 *Rahman Zahagir Vorosa!
 *author:mabbappy
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char s[31] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string s1;
    vector<char> v;
    char c;
    cin >> c;
    cin >> s1;
    for (int i = 0; i < 31; i++)
    {
        if (c == 'R')
        {
            if (s1[i] == s[i])
            {
                v.push_back(s1[i - 1]);
            }
        }
        else if (c == 'L')
        {
            if (s1[i] == s[i])
            {
                v.push_back(s1[i + 1]);
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
}