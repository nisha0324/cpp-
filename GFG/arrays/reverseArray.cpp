// To reverse an array

#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array before reversing" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    int j = n-1;

    for (int i = 0; i < j; i++)
    {
            int m = arr[i];
            arr[i] = arr[j];
            arr[j] = m;
            j--;
        
    }
    
     cout <<endl <<  "Array after reversing" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}