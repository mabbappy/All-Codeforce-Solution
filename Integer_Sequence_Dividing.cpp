#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (((n * (n + 1)) / 2) % 2 == 0)
    {
        cout << "0" << endl;
    }
    else
        cout << "1" << endl;
}