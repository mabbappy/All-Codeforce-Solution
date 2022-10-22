#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        // cout << b[j] << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}