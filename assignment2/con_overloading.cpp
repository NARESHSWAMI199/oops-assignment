#include<iostream>
using namespace std;

//Q3 C++ program to explain the constructor overloading.

class CopyCuns{
    int a,b;
    std::string name;
    public:
    CopyCuns(int a,int b){  this->a = a; this->b = b; }
    // cons overloading 
    CopyCuns(string name,int b){  this->name = name; this->b = b; }

    string get_name(){ return name;}
    int get_a(){ return a;}
    int get_b(){ return b;}
};


int main(){
    CopyCuns obj1(4,5);
    CopyCuns obj2("naresh",10); 
    cout<<" obj1 : "<<obj1.get_a()<<" and "<< obj1.get_b() <<endl;
    cout<<" obj2 : "<<obj2.get_name()<<" and "<< obj2.get_b() <<endl;

    return 0;
}


// output
// obj1 : 4 and 5
// obj2 : naresh and 10