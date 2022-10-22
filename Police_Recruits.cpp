#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c = 0, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((a[i] < 0 && sum <= 0))
        {
            c++;
        }
        else
        {
            sum += a[i];
        }
    }
    cout << c;
}