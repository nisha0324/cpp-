/** This is a simple program in which I will be performing four tasks on an array:
 *         1.Searching -- O(n)
 *         2.Inserting -- O(n)
 *         3.Deleting -- O(n)
 *         4.Accessing -- O(1)  */

//----------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int menu(){
      int choice;

     cout << "Select Any one Options:\n";
     cout<< "1.print the data\n" << "2.Add Data\n" << "3.Delete the data\n" << "4.Search The data\n";
     cin >> choice;

     return choice;
}


//To print Data
void printData(string * name, int n){

    for (int i = 0; i < n; i++)
    {
        cout <<name[i] << endl;
    }
    
}



string * enterDataAtPos(string input, int n, int pos, string names[]){

    n++;

    for (int i = n; i >= pos; i--)
        names[i] = names[i-1];

    names[pos-1] = input;
    
    return names;
}


string * deleteDataAtPos(int n, int pos, string names[]){

     

    for (int i = pos; i < n; i++)
        names[i] = names[i+1];

        n = n-1;

    return names;    
}


//To add Data
void addData(string * names, int n){
    string name;
    int pos;
    cout << "enter the name you want to add \n";
    cin >> name;
   
   cout << "enter the position where you want to add\n";
   cin >> pos;

   printData(enterDataAtPos(name, n , pos , names), n);

}


void deleteData(string * names, int n){
     int pos;
     cout << "enter the position you want to delete\n";
     cin >> pos;

     printData(deleteDataAtPos(n , pos , names), n);
}


//To Search
void searchData(string * names){
    string name;
    cout << "enter the name you want to search \n";
    cin >> name;

   for (int i = 0; i < 10; i++)
   {
       if (names[i] == name)
           cout << name << " found";
       else
         return;     
   }
   
}


//To select Options
void selection(int choice, string * name, int n){

    switch (choice)
    {
    case 1:
        printData(name, n);
        break;
    case 2:
        addData(name, n);  
        break; 
    case 3:
        deleteData(name, n);
        break;      

    case 4:
        searchData(name);
        break;    
    
    default:
      cout << "Invalid Input";
        break;
    }


}


int main(){

    string name[] = {"Nisha","Nitin","Ichigo","Yato","Hiyori","Yuki"};
    int n = name->length();

   // Menu 
    int choice = menu();

    //Selection
   selection(choice , name,n);

    return 0;
}

