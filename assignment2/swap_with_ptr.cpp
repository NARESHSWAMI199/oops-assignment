#include<iostream>
using namespace std;

// Q9. Program to swap the values of two variables using pass by value,
// pass by reference and pass by pointers.

class SwapWithPointer{
    public:
    void swap( int *a,int *b){
        int *hold = a; 
        a = b;
        b = hold;
        cout<<"The value of x "<<*a<<endl<< "The value of y "<<*b<<endl;
    }
};
int main(){
    int x = 10,y=20;
    int *a =  &x;
    int *b = &y;
    SwapWithPointer obj;
    obj.swap(a,b);
    return 0;
}


// output : 
// The value of x 20
// The value of y 10