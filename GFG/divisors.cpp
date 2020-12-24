// To print divisors of a number in increasing order

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (n%i == 0)
        {
            cout << i << endl;
        }
        
    }
    
    return 0;
}

//time complexity is O(n);