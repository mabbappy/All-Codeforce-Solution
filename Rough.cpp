/**
 *Bismillah Hir Rahmanir Rahim!
 *Rahman ZAHAGIR Vorosa!
 *author:mabbappy
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll SIZE = 1e7;
bool a[SIZE + 5];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> prime;
    int t, x, y, n, count = 0, c = 0;
    a[0] = true;
    a[1] = true;
    for (int i = 2; i <= SIZE; i++)
    {
        if (a[i] == false)
        {
            prime.push_back(i);
            for (int j = 2 * i; j <= SIZE; j = j + i)
            {
                a[j] = true;
            }
        }
    }
    int tt;
    cin >> tt;
    while (tt--)
    {
        c++;
        cin >> n;
        count = 0;
        for (int i = 0; true; i++)
        {
            x = prime[i];
            y = n - x;
            if (x > y)
            {
                break;
            }
            if (a[y] == 0)
            {
                count++;
            }
        }
        cout << "Case " << c << ": " << count << endl;
    }
}