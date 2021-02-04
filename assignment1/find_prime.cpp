#include <iostream>
using namespace std;

class Prime {
    public:
    bool is_prime(int a){
        for (int i = 2; i< 10; i++ ){
            if (i !=a && a%i == 0){
                return false;
            }
        }
        return true;
    }
    
};

int main(){
    int a; 
    cout <<"enter you input : ";
    cin >> a;
    Prime prime;
    if (prime.is_prime(a)){
        cout <<"this is a prime number : "<<endl;
    }
    else{
        cout <<"this is not a prime number : "<<endl;   
    }
    return 0;
}