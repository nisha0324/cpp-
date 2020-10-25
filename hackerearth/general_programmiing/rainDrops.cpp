#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int l, r, s, min, max;
        cin >> l >> r >> s;

        min = l / s;
        if (l % s != 0)
        {
            min += 1;
        }

        max = r / s;

        if (min <= max)
        {
            cout << min << " " << max << endl;
        }

        else
        {
            cout << " -1 " << endl;
        }
    }

    return 0;
}