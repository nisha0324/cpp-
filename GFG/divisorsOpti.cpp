#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i;
    int temp = 1;

    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
        temp++;
    }

    for (i = temp; i >= 1; i--)
    {
        if (n % i == 0)
        {

            // cout <<" i final value is "<< i << endl;
            cout << n / i << endl;
        }
    }

    return 0;
}

//time complexity is O(n^1/2);