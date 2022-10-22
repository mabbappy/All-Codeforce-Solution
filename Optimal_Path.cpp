#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long int n, m;
        cin >> n;
        cin >> m;
        cout << ((n + 1) * n * m + m * (m - 1)) / 2 << endl;
    }
}