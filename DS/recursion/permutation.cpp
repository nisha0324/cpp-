#include <bits/stdc++.h>
#include <string>
using namespace std;

int perm(string c, int i, int n)
{
    int j;
    if (i==n-1)
    {
        cout << c << "\n";
    }
    for (int j = i; j < n; j++)
   {
        swap(c[i],c[j]);
        perm(c,i+1,n);
        swap(c[i],c[j]);
    }
     
}

int main()
{
    string s;
    getline(cin, s);

    perm(s,0,s.length());
    return 0;
}