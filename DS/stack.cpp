#include <bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack{
    int top;

    public :
        int a[MAX];                // Maximum size of stack

        Stack(){ top = -1; }       // Constructor

        bool push(int x){

            if (top >= (MAX - 1))
            {
                cout << "Stack is in overflow condition" << endl;
                return false;
            }
            else
            {
                a[++top] = x;
                cout << x << " pushed into stack" << endl;
                return true;
            }
            
        }

        int pop(){
            if (top < 0)
            {
                cout << "Stack underflow" << endl;
                return 0;
            }
            else
            {
               int x = a[top--];
               return x;
            }
        }

        int peek(){
            if (top < 0)
            {
                cout << "stack is empty" << endl;
                return 0;
            }
            else
            {
                int x = a[top];
                return x;
            }    
            
        }

};

int main(){
    Stack s;
    s.push(100);
    s.push(90);
    s.push(200);

    s.pop();
    int x = s.peek();

    cout << "The top element is: " << x;

    return 0;
}