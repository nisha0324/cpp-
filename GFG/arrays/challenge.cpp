#include<bits/stdc++.h>
using namespace std;

int main(){

    int d;
    cin >> d;

    int n;
    cin >> n;

    int lastDigit = n%10;
    int firstDigit;
                                       /**
                                        * 1234 == 4231
                                        * 1000 + 200 + 30 + 1 == 4000 + 200 + 30 + 1
                                        * 
                                        * */

                                       
    while (n > 0)
    {
        firstDigit = n%10;
        n = n/10;
    }
    
    cout << firstDigit << " " << lastDigit;

    return 0;
}