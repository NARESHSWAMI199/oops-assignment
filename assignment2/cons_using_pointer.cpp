#include<iostream>
using namespace std;

// 4. C++ program to show the constructor using this pointer

class PtrCuns{
    public:
    int a,b;
    PtrCuns(int a,int b){
        this->a = a; 
        this->b = b;
        cout<< "the sum of both : "<<(a+b)<<endl;
    }
};


int main(){
    PtrCuns *ptr = new PtrCuns(10,20);
    return 0;
}

// output:
// the sum of both : 30

