#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, num = -1;
        cin >> n;
        map<int, int> hah;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            hah[x]++;
            if (hah[x] >= 3)
            {
                num = x;
            }
        }
        cout << num << endl;
    }
}