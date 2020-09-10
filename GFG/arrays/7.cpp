//https://practice.geeksforgeeks.org/problems/index-of-first-1-in-a-sorted-array-of-0s-and-1s/0

#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int pos;

        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < N; i++)
        {
            if (arr[i] == 1)
            {
                pos = i;
                break;
            }
            
        }
        
        cout << pos;
    }

    return 0;
    
}