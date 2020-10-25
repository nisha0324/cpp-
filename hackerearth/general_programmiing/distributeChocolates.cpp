#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T-- > 0)
    {
        int c, n;
        cin >> c >> n;

        int k;

        k = c - (n*(n+1))/2;

        if (k > 0)
        {
           cout << k % n << endl;
        }

        else
        {
            cout << c;
        }
    }

    return 0;
}