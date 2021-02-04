#include<iostream>
using namespace std;


// 6. C++ program to show how friend function can access the members of class

// this mean we create a B class 
class B;
class A {
    // by default value are private
    int a=10;
    friend int sum(A a,B b);
};

class B {
    int b =20; 
    friend int sum(A a, B b);
};


// we can use private member of a class but 
// condition is we must need the assign friend function in allready in class
int sum(A a_obj ,B b_obj){
    return a_obj.a+b_obj.b;
}


int main(){
    A a;
    B b;
    sum(a,b);
    cout<<"the sum of both private members from class A and from class B :  "<<  sum(a,b) <<endl;

    return 0;
}

// output :
// the sum of both private vars :  30