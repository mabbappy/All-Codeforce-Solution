#include <bits/stdc++.h>
using namespace std;
void Bappy21()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a;
        cin >> a;
        int ar[a + 5];
        for (int i = 1, value = a - 2; i <= a - 2; i++, value--)
        {
            ar[i] = value;
        }
        ar[a - 1] = a - 1;
        ar[a] = a;
        if (a % 2 != 0)
        {
            swap(ar[1], ar[2]);
        }
        for (int i = 1; i <= a; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    Bappy21();
}