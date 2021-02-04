#include <iostream> 
using namespace std;

// 8. Program to show the concept of friend class.
class A { 
	int a; 
public: 
	A() { a = 10; } 
	friend class B; // Friend Class 
}; 

class B { 
	int b; 
public: 
	void displayA(A& x){ 
		std::cout << "the private member from class A in class B " << x.a<<endl; 
	} 
}; 

int main() { 
	A a; 
	B b; 
	b.displayA(a); 
	return 0; 
} 


// output 
// the private member from class A in class B 10