#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, a, n, b;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long ar[n + 5], s = 0, ng = 0;
        for (a = 0; a < n; a++)
        {
            cin >> ar[a];
            if (ar[a] < 0)
                ng++;
            ar[a] = abs(ar[a]);
            s += ar[a];
        }
        if (ng % 2 == 1)
        {
            s = s - 2 * (*min_element(ar, ar + n));
        }
        cout << s << endl;
    }
}
