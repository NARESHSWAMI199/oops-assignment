#include <iostream>
using namespace std;

class Reverse {    
    public:
        int reverse( int value){
            int reverse=0,re ;
            while( value!=0 ){
                re = value % 10;
                reverse = reverse * 10 + re;
                value /= 10;
            }
            return reverse;
        }   
};

int main(){
    Reverse reverse_obj;
    int value; 
    cout <<"enter your integer value : " ;
    cin >> value;
    cout<<" reversed : "<< reverse_obj.reverse(value) <<endl;
    return 0;
}