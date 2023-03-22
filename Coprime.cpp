#include <bits/stdc++.h>
using namespace std;
int is_prime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return true;
            break;
        }
    }
}
int main()
{
    // Bismilla Hir Rahmanir Rahim
    // Assalatu Assalamualika Ya Rasool-Allah!
    // Rahman Zahagir Vorosa!
    // mabbappy
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int ar[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << is_prime(ar[i]);
        }
        cout << endl;
    }
    return 0;
}