/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:22 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<string> s{"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    while (n > 5)
    {
        n = n / 2 - 2;
    }
    cout << s[n - 1] << endl;
}