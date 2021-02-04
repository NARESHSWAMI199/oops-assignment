#include<iostream>
using namespace std;



// Q2. C++ program to explain the copy constructor.
// ans :  A copy constructor is a member function which initializes an object using another object of the same class. 
// A copy constructor has the following general function prototype:

class CopyCuns{
    int a,b;
    public:
    CopyCuns(int a,int b){  this->a = a; this->b = b; }
    int get_a(){ return a;}
    int get_b(){ return b;}
};


int main(){
    CopyCuns obj1(4,5);
    CopyCuns obj2 = obj1; // this condition called copy cons 
    // we can get the value using both cons
    cout<<" obj1 : "<<obj1.get_a()<<" and "<< obj1.get_b() <<endl;
    cout<<" obj2 : "<<obj2.get_a()<<" and "<< obj2.get_b() <<endl;

    return 0;
}


// When is user-defined copy constructor needed?
// If we don’t define our own copy constructor, the C++ compiler creates a default
//  copy constructor for each class which does a member-wise copy between objects.
//  The compiler created copy constructor works fine in general.We need to define our
//  own copy constructor only if an object has pointers or any runtime allocation of 
// the resource like file handle, a network connection..etc.