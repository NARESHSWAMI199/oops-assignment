#include <iostream>
using namespace std;

// Q1. Write a C++ program to enter the values of students object using
// default, dummy and parameterized constructor.

class PeramCon{
public:
    PeramCon(string name, int age, int std){
        // please don't correct my grammer .  # smily-> feel
        cout << "my name is " << name << " and my age is " << age << " i studying in " << std << " std" << endl;
    }
};

int main(){
    std::string name;
    int age;
    int std;
    cout << "enter your name : ";
    getline(std::cin, name);
    cout << "enter your age : " ;
    cin >> age;
    cout << "enter your standard : ";
    cin >> std;

    PeramCon peramCon_obj(name, age, std);
    return 0;
}

// output 

// enter your name : naresh
// enter your age : 21
// enter your standard : 1
// my name is naresh and my age is 21 i studying in 1 std