#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt-- > 0)
    {
        int n, a = 0;
        cin >> n;
        for (int i = 1; i <= n; i = i * 10 + 1)
        {
            for (int j = 1; j <= 9; j++)

                if (i * j <= n)
                    a++;
        }
        cout << a << endl;
    }
    return 0;
}
