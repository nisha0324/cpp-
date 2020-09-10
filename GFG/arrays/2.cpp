// http://quiz.geeksforgeeks.org/c-program-find-largest-element-array/

#include <iostream>
using namespace std;

void largest_number(int *arr , int n)
{
   
   for (int i = 0; i < n; i++)
   {
       cin >> arr[i];
   }

   int large = arr[0];
   for (int i = 0; i < n; i++)
   {
       if (large < arr[i])
       {
           large = arr[i];
       }
       
   }
   
  cout << "The largest number is:" << large;
   
}

int main()
{
    int N;
    cin >> N;

    int arr[N];
    largest_number(arr , N);

     return 0;
}