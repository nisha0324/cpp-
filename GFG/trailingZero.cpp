/**
 * Program to find trailing zeros of a factorial of a number
 *   eg: 5  --> 5*4*3*2*1 = 120 => trailing zero is 1
 * 
 * This is an efficent program in which we calculate the number of 2's and 5's which will tell us the number of trailing zeros
 *  The number of 5's is always going to be smaller than 2,
 *  therefore, we just have to calculate number of 5. 
 * 
 * suppose n = 100
 *         for i = 5 => res = 20
 *         for i = 10 => res = 30
 *             i = 50 => res = 32
 *       
 * */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int res = 0;
    int count = 0;

    for (int i = 5; i <= n; i *= 5)
    {
        res += n/i;
    }
    

    cout << "count " << res;
    
    

    return 0;
}