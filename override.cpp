 // Example of a Cpp program to create virtual function in a base class and to override the virtual function in  derived classes//

#include<iostream> 
using namespace std; 
class bas 
{ public: 
virtual void print () 
{ cout<< "The base class is printed" <<endl; } 
void show () 
{ cout<< " The base class is shown" <<endl; } 
}; class der:public bas 
{ public: 
void print () 
{ cout<< "The derived class is printed" <<endl; } 
void show () 
{ cout<< "The derived class is shown" <<endl; } 
}; int main() 
{ 
bas *bptr; 
der d; 
bptr = &d; 
bptr->print(); 
bptr->show(); 
} 
