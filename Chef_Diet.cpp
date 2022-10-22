#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b;
        cin >> a >> b;
        int ar[a];
        for (int i = 0; i < a; i++)
        {
            cin >> ar[i];
        }
        int c = 1;
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            if (ar[0] < b)
            {
                cout << "NO 1" << endl;
                c = 0;
                break;
            }
            else if (ar[i] > b)
            {
                sum = ar[i] - b;
                ar[i + 1] += sum;
                c = 1;
            }
            else
            {
                c = i;
            }
        }
        if (c == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO"
                 << " " << c + 1 << endl;
        }
    }
    return 0;
}
