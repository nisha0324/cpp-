#include <bits/stdc++.h>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;

    int T;
    cin >> T;

    while (T--)
    {
      int N;
      cin >> N;

      int a[N];
      for (int i = 0; i < N; i++)
      {
          cin >> a[i];
      }

      int less_tasty = a[0];

      for (int i = 0; i < N; i++)
      {
          if (a[i] < less_tasty)
          {
              less_tasty = a[i];
          }
          
     }
      
      cout << less_tasty;
      
    }
    
    return 0;
}