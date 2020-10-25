#include <bits/stdc++.h>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
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

        int count = 0;
        int square;
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (a[i] == a[j])
                {
                    square = a[i];
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            if (a[i] == square)
            {
                count++;
            }
        }

        if (count < 4)
        {
            count = -1;
            cout << count;
        }
        else
        {
            count = count / 4;
            square *= square;
            cout << square << "\t" << count << "\n";
        }
    }
    return 0;
}