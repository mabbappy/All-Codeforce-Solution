#include <bits/stdc++.h>
using namespace std;

void Bappy21()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, f = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        string s;
        cin >> s;
        map<int, char> mp;
        for (int i = 0; i < n; ++i)
        {
            if (mp.find(arr[i]) == mp.end())
            {
                mp[arr[i]] = s[i];
            }
            else
            {
                if (mp[arr[i]] != s[i])
                {
                    f = 0;
                }
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    Bappy21();
    return 0;
}