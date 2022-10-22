#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            string s = "";
            s += a[i][j];
            s += a[i + 1][j];
            s += a[i][j + 1];
            s += a[i + 1][j + 1];
            sort(s.begin(), s.end());
            if (s == "acef")
                count++;
        }
    }
    cout << count << endl;
    return 0;
}