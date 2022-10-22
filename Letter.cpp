#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, st1, st2, end1, end2;
    cin >> n >> m;
    char sheet[n][m];
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> sheet[i][j];
            if (sheet[i][j] == '*')
            {
                v1.push_back(i);
                v2.push_back(j);
            }
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for (int i = v1[0]; i <= v1[v1.size() - 1]; i++)
    {
        for (int j = v2[0]; j <= v2[v2.size() - 1]; j++)
            cout << sheet[i][j];
        cout << endl;
    }
}