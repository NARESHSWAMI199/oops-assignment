#include <iostream>
using namespace std;

class Opreation {
    // by default private and you can't access this outside of class aslo not in main func
    public:
        int a ,b;
        string name;

        void read_line(string a){
            cout<< a <<endl;
        }
};

int main(){
    // class obj 
    Opreation opreation;
    // you can use new feature string in cpp also //  you can say thanks me #lol
    std::string str;
    cout<<"enter the text : "<<endl;
    std::getline(std::cin,str);
    opreation.read_line(str);
    return 0;
}