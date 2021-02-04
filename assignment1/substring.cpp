#include<iostream>
using namespace std;
const int max_len = 365; 

class SubString{
    public:
bool is_substring(string str1, string str2) 
{ 
    int count[max_len] = {0}; 
    for (int i = 0; i < str1.length(); i++) 
        count[str1[i]]++; 

    for (int i = 0; i < str2.length(); i++) 
    { 
        if (count[str2[i]] == 0) 
           return false; 
    } 
    return true; 
} 
  
};


int main(){
    std::string str1;
    std::string str2;
    getline(std::cin,str1);
    getline(std::cin,str2);
    SubString substring;
    if(substring.is_substring(str1,str2)){
        cout<<"yes this is a substring of str1";
    }
    else{
        cout<<"No this is not a substring of str1";
    }


    return 0;
}
