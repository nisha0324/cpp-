#include <iostream>
using namespace std;

int fact(int n)
{
    if (n < 1)
    {
        return 1;
    }

    else
    {
       
       return (n*fact(n-1));

    }
   
}

int main()
{
    int N;
    cin >> N;

    int f = fact(N);
    cout << f;

    return 0;

}