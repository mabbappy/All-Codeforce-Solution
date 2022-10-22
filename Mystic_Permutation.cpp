#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int arr2[n];
            for (int i = 0; i < n; i++)
            {
                arr2[i] = i + 1;
            }
            for (int i = 0; i < n - 1; i += 1)
            {
                if (arr[i] == arr2[i])
                {
                    swap(arr2[i], arr2[i + 1]);
                }
            }
            if (arr[n - 1] == arr2[n - 1])
            {
                swap(arr2[n - 1], arr2[n - 2]);
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr2[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}