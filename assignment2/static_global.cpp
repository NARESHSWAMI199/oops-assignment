#include<iostream>
using namespace std;

// Q7. Write a program to explain the static, global and concept of constant variables.
// you can use any where 
string global = "i am global";

class A{
    // you can't initllize a static var in class and you can call this type func and var with class name
    public:
    static int a;
    void get_global(){
        cout<<"calling from class function "<<global<<endl;
    }
};

int A::a = 10;

int main(){
// you can initllize one time or can't change 
// use of const var, like arr length  like 
    int max = 5; 
    int arr[max] = {1,2,3,4,5};
    cout<<"calling from main function "<<global<<endl;
    A a;
    a.get_global();
    cout<<"we calling the static var using class name : "<<A::a<<endl;
    return 0;
}