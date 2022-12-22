/*
**author:mabbappy
**date:21 Nov,22
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    if (s == "a1" || s == "h1" || s == "a8" || s == "h8")
        cout << 3;
    else if (s[0] == 'a' || s[0] == 'h' || s[1] == '1' || s[1] == '8')
        cout << 5;
    else
        cout << 8;
}
