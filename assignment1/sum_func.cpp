#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main(){
    int a ,b;
    cout<<"enter the first  and second value : "<<endl;
    cin >>a>>b;
    cout<<"sum of both : "<< sum(a,b);
    return 0;
}