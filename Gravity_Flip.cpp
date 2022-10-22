#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    int a[tt];
    for (int i = 0; i < tt; i++)
    {
        cin >> a[i];
    }
    sort(a, a + tt);
    for (int i = 0; i < tt; i++)
    {
        cout << a[i] << " ";
    }
}