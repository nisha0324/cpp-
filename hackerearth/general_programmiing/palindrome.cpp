#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    string s1;
    for (int i = (s.length() - 1); i >= 0; i--)
    {
        s1 += s[i];
    }

    return s1;
}


int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string s;
        cin >> s;

        string required;

        if (s == reverse(s))
        {
           cout << "-1";
        }

        else
        {
           sort(s.begin(),s.end());
             cout << s;
        }

    }

    return 0;
}