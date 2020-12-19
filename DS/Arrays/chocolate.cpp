/**
 * A boy has 15 rupee. one chocolate cost is one rupee. Also the boy can buy a chocolate by 3 wrappers.
 *  How much chocolate the boy can buy?
 * 
 * */

//--------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int main(){

    int r = 15;
    int choc = 0;

    for (int i = 0; i < r; i++)
    {
        choc++;
    }
    
        if ((choc % 3 ) == 0)
        {
            int temp = choc / 3 ;
            choc += temp;
            cout << choc << endl;
        }

    cout << "Total chocolates are "<< choc;
    

    return 0;
}