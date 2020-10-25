// Smallest power of 2 greater than or equal to n

#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    
    int a = N;
    
    for(int i = 0; i < T; i++)
    {
        cin >> N;
        
        for (int i = 0; i < N; i++)
        {
            if (N <= 2^i)
            {
                a = 2^i;
            }
            
        }
        
        cout << a;
        
    }
}