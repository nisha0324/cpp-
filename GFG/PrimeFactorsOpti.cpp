#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

     while (n%2 == 0)
        {
            cout << 2 << endl;
            n = n/2;
        }

     while (n%3 == 0)
        {
            cout << 2 << endl;
            n = n/2;
        }


    for (int i = 5; i*i < n; i += 6)
    {
        while (n%i == 0)
        {
            cout << i << endl;
            n = n/i;
        }

         while (n%(i+2) == 0)
        {
            cout << i +2 << endl;
            n = n/(i+2);
        }
        
        
    }

    if(n > 3)
      cout << n;
    

    return 0;
}

// O(n^1/2)