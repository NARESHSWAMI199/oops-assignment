#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

class LowerCase {
  public:
    string  toLower(string sl){
     // using transform() function and ::tolower in STL 
        transform(sl.begin(), sl.end(), sl.begin(), ::toupper); 
        return sl;
    }
};


int main(){
    std::string str;
    getline(std::cin,str);
    LowerCase lowerCase;
    cout << lowerCase.toLower(str) <<endl;
    return 0;
}