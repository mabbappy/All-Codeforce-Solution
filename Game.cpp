
#include <iostream>
using namespace std;
int tt, n, a[110], f, k;
int main()
{
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        f = 1;
        k = n;
        while (f < k && a[f + 1])
            f++;
        while (k > f && a[k - 1])
            k--;
        cout << abs(k - f) << endl;
    }
    return 0;
}