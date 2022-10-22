#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    int a[105];
    int min = 0;
    int max = 0;
    for (int i = 0; i < tt; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < tt; i++)
    {

        if (a[i] > a[max])
        {
            max = i;
        }
        else if (a[i] <= a[min])
        {
            min = i;
        }
    }
    if (max > min)
    {
        cout << max + tt - min - 2;
    }
    else
    {
        cout << max + tt - min - 1;
    }
}