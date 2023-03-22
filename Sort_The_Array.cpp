#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Bismilla Hir Rahmanir Rahim
    // Assalatu Assalamualika Ya Rasool-Allah!
    // Rahman Zahagir Vorosa!
    // mabbappy
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int ar[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int min = ar[0];
    int x = ar[0];
    int y = 0;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
            y = i;
        }
    }
    ar[0] = min;
    ar[y] = x;
    int flag = 0;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] < ar[i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
        cout << 1 << " " << y + 1 << endl;
    }
    return 0;
}