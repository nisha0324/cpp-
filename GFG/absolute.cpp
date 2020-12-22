#include<bits/stdc++.h>
using namespace std;

int absolute(int n){

    return n - 2*n;
}

int main(){

    int n;
    cin >> n;

    cout << absolute(n);

    return 0;
}