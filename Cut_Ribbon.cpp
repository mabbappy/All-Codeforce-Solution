#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if (a + b + c == n)
    {
        cout << "3" << endl;
    }
    else if (a + b == n or a + c == n or b + c == n)
    {
        cout << "2" << endl;
    }
    else if (n == a == b == c)
    {
        cout << "1" << endl;
    }
    else
        cout << n << endl;
}