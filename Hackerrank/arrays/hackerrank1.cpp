#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string a[10] = {"one","two","three","four","five","six","seven","eight","nine","ten"};

    if (n >= 1 && n<= 9)
    {
        cout << a[n-1];
    }

    else
    {
        cout << "greater than 9";
    }
    
    
}