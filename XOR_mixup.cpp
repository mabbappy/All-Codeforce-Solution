#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << a[0] << endl;
    }
}