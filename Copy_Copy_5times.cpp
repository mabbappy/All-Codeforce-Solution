
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        set<int> s;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;
    }
    return 0;
}