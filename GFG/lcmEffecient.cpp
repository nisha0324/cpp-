//The effecient way to solve lcm is using the formula  a*b = gfd(a, b)*lcm(a, b)

#include<bits/stdc++.h>
using namespace std;

int HCF(int a, int b){

    if (b == 0)
        return a;

    return HCF(b, a%b);    
    
}

int LCM(int a, int b, int res){

    return ((a*b)/ res);
}

int main(){

    int a, b;
    cin >> a >> b;

    int res = HCF(a, b);

   cout << " HCF is " << HCF(a, b) << endl;
   cout << " LCM is " << LCM(a, b, res) << endl;
    

    return 0;
}

//Time complexity O(log(min(a,b));