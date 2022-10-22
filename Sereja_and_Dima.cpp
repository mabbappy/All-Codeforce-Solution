#include <bits/stdc++.h>
    using namespace std;
     
    int main ()
    {
      int n;
      cin >> n;
      int a[n];
      for (auto &x : a)
        cin >> x;
     
      int i = 0; int j = n-1;
      int ss = 0;
      int dd = 0;
      bool s_turn = true;
      while (i <= j)
        {
          (s_turn ? ss : dd) += max(a[i], a[j]);
          if (a[i] > a[j]) i++;
          else j--;
          
          s_turn = !s_turn;
        }
      cout << ss << " " << dd << endl;
    }