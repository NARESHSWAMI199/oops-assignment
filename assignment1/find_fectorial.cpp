#include <iostream>
using namespace std;

class Fact {
    public:
    int factorial(int n ){
        if (n == 0){
            return 1;
        } 
        n = n*(factorial(n-1));
        return n;
    }

};

int main(){
    Fact fact;
    int a;
    cout<<"enter you input value : ";
    cin >> a;
    cout<< " the factorial is : "<<fact.factorial(a)<<endl;
    return 0;
}