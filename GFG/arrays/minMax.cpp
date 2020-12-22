//To find minimum and maximum elements in an array

#include<bits/stdc++.h>
using namespace std;

int min(int arr[], int n){

    int min = arr[0];
    for (int i = 1; i < n; i++)
    {   
            if (min > arr[i])
            {
                 min = arr[i];
            }       
    }

    return min;    
}

int max(int arr[], int n){

    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])                   // 33 11 22 44   11 33  22 44    22 11 55 3 66
        {
            max = arr[i];
        }
    }

    return max;    
}

int main(){

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   cout << "Minimum " << min(arr , n) << endl;
   cout << "Maximum " << max(arr , n) << endl;

    return 0;
}