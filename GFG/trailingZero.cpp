#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int res = 0;
    int count = 0;

    for (int i = 5; i <= n; i *= 5)
    {
        res += n/i;
    }
    

    cout << "count " << res;
    
    

    return 0;
}