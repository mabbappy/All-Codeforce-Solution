#include <bits/stdc++.h>
using namespace std;
void Bappy21()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string s, s1 = "Timur";
        cin >> s;
        sort(s.begin(), s.end());
        sort(s1.begin(), s1.end());
        if (s == s1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    Bappy21();
}