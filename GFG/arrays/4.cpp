// WAP to sort the arrays

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int next = 0;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (arr[i] > arr[j])
            {
               
              next = arr[j];
              arr[j] = arr[i];
              arr[i] = next; 

            }
           
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i];
    }
    
    
    
}