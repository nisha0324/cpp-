// WAP to find a pair of two integers of a array which are equals to a variable.

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;

    int pos;
    int pos1;

    int X;
    cin >> X;

    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (arr[i] + arr[j] == X)
            {
                sum = arr[i] + arr[j];
                pos = i;
                pos1 = j;
                
            }
            
        }

    }

    cout << sum << arr[pos] << arr[pos1];
        
    

    return 0;
}
