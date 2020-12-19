/**
 * This question is from Data Structure 
 * 
 * Link =  https://www.hackerrank.com/challenges/2d-array/problem?h_r=next-challenge&h_v=zen */

//---------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int const R = 3;
int const s = 3;

int hourGlassSum(int  arr[][s]){

    int sum = INT8_MIN;
    int temp = 0;

    for (int i = 0; i < R-2; i++)
    {
        for (int j = 0; j < s-2; j++)
        {
            temp = (arr[i][j] + arr[i][j+1] + arr[i][j+2])
                           + (arr[i+1][j+1])
               + (arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]);

           sum = max(temp , sum);             
        }   
    }   
   return sum;
}


int main(){

    int arr[R][s];
    
    // to input the array
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cin >> arr[i][j];
        }
        
    }

   int maxSum = hourGlassSum(arr);
   cout << maxSum;
    
    return 0;
}