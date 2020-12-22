#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
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

//Time complexity is O(n)