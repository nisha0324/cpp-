#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){

    int res = min(a, b);

     for (int i = res; i > 0; i--)
     {
         if (a%i == 0 && b%i == 0)
         {
                break;
         }
         
     }
    return res; 
     
}

int main(){

    int n1, n2;
    cin >> n1 >> n2;

    int c = GCD(n1, n2);
    cout << c  << endl;

    return 0;
}

// Time complexity O(min(a,b))