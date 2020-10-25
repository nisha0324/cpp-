#include<iostream>
#include<vector>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int m;
   vector <int> v1;

   for (int i = 0; i < n; i++)
   {
       while (cin>> m)
       {
          v1.push_back(m);
       }
       
   }

   int a;
   cin >> a;
   
  cout <<endl << "value at " << a << v1.at(a);
   
    return 0;
}