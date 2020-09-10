// Write a program to display the floating number with a given precision value.
// https://practice.geeksforgeeks.org/problems/c-a-speed-breaker/0/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T;
	float a;
	int b;
	
	for(int i=0; i<T; i++)
	{
	cin >> a >> b;
	cout <<setprecision(b) << a << endl;
	}
	
	return 0;
}