#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        cin >> a >> b;

        int noOfCircles;

        if (a > b)
        {
            noOfCircles = (a / b);
        }

        else
        {
            noOfCircles = (b / a);
        }
    }

    return 0;
}