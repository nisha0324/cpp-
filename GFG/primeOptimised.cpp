/**
 * Idea = Divisor always appear in pairs
 * 
 *     eg: 30: (1,30), (2, 15), (5, 6)
 * 
 * if (x,y) is a pair then 
 *       x*y = n
 *       if x <= y
 *       x*x <- n
 *       x = n ^1/2
 * 
 * 
 * */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i = 2; i < n^(1/2); i++)
    {
          if (n%i == 0)
          {
              cout << "not a prime number "<< endl;
              return -1;
          }
          
    }

    cout << "It is a prime number "<< endl;
    

    return 0;
}

//Time complexity is O(n^(1/2))