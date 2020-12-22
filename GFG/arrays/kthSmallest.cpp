//To find Kth smallest number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T > 0)
    {

        long n;
        cin >> n;

        long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long k;
        cin >> k;

        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl
             << k << "th smallest element is " << arr[k - 1] << endl;
    }

    return 0;
}