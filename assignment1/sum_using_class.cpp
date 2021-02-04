#include <iostream>
using namespace std;

class Opreation {
    // by default private and you can't access this outside of class aslo not in main func
    public:
        int a ,b;
        string name;
    
        int sum(int a, int b){
            return a+b;
        }
};

int main(){

    // class obj 
    Opreation opreation;
    int a ,b;
    cout<<"enter the first and second value : "<<endl;
    cin >>a>>b;
    cout<<"sum of both : "<< opreation.sum(a,b);
    return 0;
}