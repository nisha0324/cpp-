#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, X, E, D, Y;
    cin >> S >> X >> E;

    int temp = 0;
    for (int i = 0; i < E; i++)
    {

        cin >> D >> Y;

        temp = temp + Y;
    }

    S -= temp;

    S /= X;

    cout << (S + 1 + E) << endl;

    return 0;
}