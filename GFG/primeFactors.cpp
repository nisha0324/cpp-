//To print prime factors of the given number

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){

    if(n ==2 || n == 3)
        return true;

    if(n%2 == 0 || n%3 == 0)
       return false;

    if(n%2 == 0 || n%3 == 0)
       return false;

    for (int i = 5; i*i < n; i += 6)
    {
        if(n%i == 0 || n%(i+2) == 0){
          return false;
        }  
    }

    return true;
          
}

int main(){
    
    int n;
    cin >> n;


    for (int i = 2; i < n; i++)
    {
       // cout << isPrime(i) <<endl;
        if (isPrime(i))
        {
            int x = i;
            while (n%x == 0)
            {
                cout << i << endl;
                x *= i;
            }
            
        }
        
    }
    

    return 0;
}

//time complexity O(n^2log(n))