#include <iostream>
using namespace std;

class CheckLeap{

    public:
        bool is_leap(int year){
            if (year%4 ==0 && year%400 ==0 && year%100 ==0){
                return true;
            }
            return false;
        }

};


int main(){
    int year;
    cout<<"enter the year which you want check : ";
    cin>>year;
    CheckLeap check_leap;
    if (check_leap.is_leap(year)){
        cout<<"this is a leap year"<<endl;;
    }
    else{
        cout<<"this is not a leap year"<<endl;
    }
    return 0;
}