#include <iostream>
using namespace std;

int Sum(int *arr , int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return (Sum(arr, n-1) + arr[n-1]);
    }
    
    
}

int main()
{
    int N;
    cin >> N;

    int a[N];
    
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    
    cout << Sum(a,N);
    return 0;
}