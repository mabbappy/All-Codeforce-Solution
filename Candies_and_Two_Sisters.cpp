#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> b;
    while (b--)
    {
        cin >> a;
        if (a >= 3)
        {
            if (a % 2 == 0)
                cout << a / 2 - 1 << endl;

            else
            {
                cout << a / 2 << endl;
            }
        }
        else
        {
            cout << "0" << endl;
        }
    }
}