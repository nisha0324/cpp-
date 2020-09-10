// How do you find the duplicate number on a given integer array?

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
    
    int two = 0;
    

    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
             if (arr[i] == arr[j])
           {
             two = arr[i];
             cout << two;
            
           }
        }
        
        
    }

    return 0;
}