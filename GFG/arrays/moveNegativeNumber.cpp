/**
 * Move all negative numbers to beginning and positive to end with constant extra space
 * Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
 * Output: -12 -13 -5 -7 -3 -6 11 6 5
 * 
 * https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
* */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);   

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // 30 -10 -20 40 -30 == -10 30 -20 40 -30 ==      -12, 11, -13, -5, 6, -7, 5, -3, -6
    }

    return 0;
}