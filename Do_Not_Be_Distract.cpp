#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        string a;
        cin >> a;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[i + 1])
            {
                for (int j = i + 2; j < n; j++)
                {
                    if (a[j] == a[i])
                    {
                        c = 1;
                        break;
                    }
                }
            }
        }
        if (c == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}