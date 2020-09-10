
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

        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int odd = 0;
        int even = 0;

        for (int i = 0; i < N; i++)
        {
            if (i % 2 == 0)
            {
                even = even + arr[i];
            }

            else
            {
                odd = odd + arr[i];
            }
        }

        if (odd > even)
        {
            cout << odd << endl;
        }

        else
        {
            cout << even;
        }
    }

    return 0;
}