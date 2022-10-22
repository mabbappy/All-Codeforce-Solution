#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1, s3;
    cin >> s >> s1;
    int x = s.size();
    int i;
    for (int i = 0, j = x - 1; i < j; i++, j--)
    {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    if (s == s1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}