#include<iostream>
#include<string>
using namespace std;

int main()
{
    string digits;
    cin >> digits;

    string total_digits = "0123456789";

   
    for (int j = 0; j < 10; j++)
    {
         int count = 0;

        for (int i = 0; i < digits.length(); i++)
        {
            if (total_digits[j] == digits[i])
            {
               ++count;
            }
        }
        
         cout << total_digits[j] << " "<< count << endl;
      
    }
    


    return 0;
}