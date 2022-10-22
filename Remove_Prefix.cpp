/*
Creator: M A B Bappy
Date: 10 August,2022
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int array[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> array[i];
        }
        set<int> s;
        int c = 0;
        for (int i = n; i > 0; i--)
        {
            s.insert(array[i]);
            c++;
            if (c > s.size())
            {
                break;
            }
        }
        cout << n - s.size() << endl;
    }
}
