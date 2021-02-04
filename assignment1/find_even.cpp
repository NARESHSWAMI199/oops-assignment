#include<iostream>
using namespace std;

class Even{
    public:
    bool even(int a ){
        if (a % 2 ==0){
            return true;
        }
        return false;
    }
};

int main(){
    int a;
    cin >> a;
    Even even;
    if(even.even(a)) cout<<"this is a  even number"<<endl;
    else cout<<"this is a odd number"<<endl;
    return 0;
}