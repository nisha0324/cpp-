// http:quiz.geeksforgeeks.org/c-program-find-sum-elements-given-array/

#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

void sum(int *arr, int n)
{

    int add = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        add += arr[i];
    }

    cout << add;
}

int main()
{
    time_t start, end;

    time(&start);
    
    int N;
    cin >> N;

    int arr[N];

    sum(arr, N);

    time(&end);

    double time_taken = double(end - start); 
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 

    return 0;
}