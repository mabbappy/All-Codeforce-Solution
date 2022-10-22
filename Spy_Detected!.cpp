#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, a;
    cin >> x;
    while (x--)
    {
        cin >> a;
        int ans[1005] = {0};
        for (int i = 0; i < a; i++)
        {
            cin >> ans[i];
        }
        for (int i = 0; i < a - 1; i++)
        {
            if (ans[i] - ans[i + 1] != 0)
            {
                if (i == 0 && ans[i] != ans[i + 2])
                {
                    cout << i + 1 << endl;
                }
                else
                {
                    cout << i + 2 << endl;
                }
                break;
            }
        }
    }
    return 0;
}