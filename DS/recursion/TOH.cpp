#include <iostream>
using namespace std;

int TOH(int n, char BEG, char AUX, char END)
{
    if (n >= 1)
    {
        TOH(n - 1, BEG, END, AUX);
        cout << BEG << "to" << END<< "\n";
        TOH(n - 1, AUX, BEG, END);
    }
}

int main()
{
    int N;
    cin >> N;


    TOH(N, 'A', 'B', 'C');

    return 0;
}