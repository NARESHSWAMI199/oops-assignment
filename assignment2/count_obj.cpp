#include<iostream>
using namespace std;
// Q5 C++ program show the count of objects created.


class CountObj{
    public:
    static int a;
    CountObj(){
        this->a++;
    }

    // static function can callusing class 
    //static member function
    static int totalObjects(){
        return a;
    }
};
// initialise static member function
int CountObj::a=0;

int main(){
    CountObj obj1;
    CountObj obj2;
    CountObj obj3;
    CountObj count4;
    CountObj count5;
    cout<<CountObj::a << " objected are created " <<endl;
    return 0;
}

// output :
// 5 objected are created 

