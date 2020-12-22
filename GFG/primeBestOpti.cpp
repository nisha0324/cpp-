/**
 * The deal is to have checkpoints
 * like to check the divisibility by 2 and 3
 * this will reduce the time complexity by more than half
 * */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    if (n % 2 == 0 || n%3 == 0)
    {
         cout << "not a prime number "<< endl;
          return -1;
    }
    

    for (int i = 5; i*i < n; i += 6)
    {
          if (n%i == 0 || n%(i+2) == 0)
          {
              cout << "not a prime number "<< endl;
              return -1;
          }
          
    }

    cout << "It is a prime number "<< endl;
    

    return 0;
}

//Time complexity is O(n^(1/2))