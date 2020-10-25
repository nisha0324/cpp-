#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n;
  int k; cin>>n>>k;

  string s = to_string(n);

  for(int i=0; i<k; i++)
  {
    if(s[i]!=9) s[i]='9';
    else {}
  }

  for(int i=0; i<s.size(); i++) cout<<n;

  return 0;
}