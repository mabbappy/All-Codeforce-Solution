#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1 or b == 1)
        {
            cout << a << " " << b << endl;
        }
        else if ((a == 3 and b == 3) or (a == 2 and b == 3) or (a == 3 and b == 2))
        {
            cout << "2"
                 << " "
                 << "2" << endl;
        }
        else
        {
            cout << a << " " << b << endl;
        }
    }
}