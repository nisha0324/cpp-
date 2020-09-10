//WAP to find the second largest number using an array of n numbers.

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

    int largest = arr[0];
    int second_largest = arr[0];

    for (int i = 0; i < N; i++)
    {
        if (largest < arr[i])
        {
            second_largest = largest;
            largest = arr[i];
        }
        
    }
    

    cout << "second largest number is:" << second_largest;
    
    
    return 0;
}