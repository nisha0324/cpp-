#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int input){

    int temp = (start + end)/2;

    if (arr[temp] > input )
    {
        end = temp;
        binarySearch(arr, start,temp,input);
    }
    else if (arr[temp] < input)
    {
        start = temp;
        binarySearch(arr, temp,end,input);
    }
    else
    {
        return temp;
    }
    
   return -1;
    
}


int main(){

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int input;
    cin >> input;


    cout << binarySearch(a,0,n,input);

    return 0;
}