#include <bits/stdc++.h>
using namespace std;
void Bappy21()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int ar[4];
        for (int i = 0; i < 3; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + 3);
        if (ar[0] + ar[1] == ar[2])
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
int main()
{
    Bappy21();
    return 0;
}