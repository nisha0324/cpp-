#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    int res = max(a,b);

    while (true)
    {
        if ( res%a == 0 && res%b == 0)
        {
            cout << res;
            return -1;
        }
        
        res++;
    }
    

    return 0;
}

//Time complexity O(a*b - max(a,b))