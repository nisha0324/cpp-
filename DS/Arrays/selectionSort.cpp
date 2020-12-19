
                                                /**
                                                  * 10, 30, 20, 40
                                                  * arr[0] > arr[1] == 10 > 30 //no swapping
                                                  * arr[0]  > arr[2] == 10 > 20 //no swapping
                                                  * arr[0] > arr[3] == 10 > 40 //no swapping
                                                  * 
                                                  * arr[1] > arr[2] == 30 > 20 // swapping etc
                                                  * */
//___________________________________________________________________________________________________________________________________________                                                 

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //Selection Sort
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                //Swapping
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

    //Output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}