/*
**author:mabbappy
**date:21 Nov,22
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        auto mx = max_element(arr, arr + n);
        for (auto i = arr; i < arr + n; i++)
        {
            if (i == mx)
            {
                continue;
            }
            else if (*i > m)
            {
                m = *i;
            }
        }
        for (auto i = arr; i < arr + n; i++)
        {
            if (i == mx)
            {
                cout << (*mx) - m << " ";
            }
            else
            {
                cout << *i - *mx << " ";
            }
        }
        cout << endl;
    }
}
