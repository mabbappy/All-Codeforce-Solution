#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c = 0;
    cin >> n;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            c++;
            n = n / 2;
        }
        else
        {
            n = n / 2;
        }
    }
    cout << c << endl;
}