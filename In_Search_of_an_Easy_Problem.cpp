#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, sum = 0;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        sum += a;
    }
    if (sum == 0)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
}