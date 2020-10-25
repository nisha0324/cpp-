#include <iostream>
using namespace std;

int main() {
	int T;
	int A, B;
	
	cin >> T;
	
	for(int i = 0 ; i < T ; i++)
	{
	   cin >> A >> B;
	   
	   cout << A+B << endl;
	   
	  if(A>B){
	      cout << A-B << endl << A/B << endl;
	  }
	  else
	  {
	      cout << B-A <<endl << B/A <<endl;
	  }
	  
	  cout << A*B;
	}
	
	return 0;
}