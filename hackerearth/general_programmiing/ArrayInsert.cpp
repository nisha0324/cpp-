#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q, x, y, z, sum;
    cin >> N >> Q;

    long int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < Q; i++)
    {
        cin >> x >> y >> z;

        if (x == 1)
        {
            arr[y] = z;
        }

        else
        {
            sum = 0;
            if (z < N && y >= 0)
            {
                for (int i = y; i <= z; i++)
                {
                    sum += arr[i];
                }
                cout << sum;
            }
            else
                cout << -1;
        }
    }

    return 0;
}