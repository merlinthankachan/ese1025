 //Create a virtual function in your base class. Override the virtual function in your derived classes//

#include<iostream> 
using namespace std; 
class bas 
{ public: 
virtual void print () 
{ cout<< "base class is printed" <<endl; } 
void show () 
{ cout<< "base class is shown" <<endl; } 
}; class der:public bas 
{ public: 
void print () 
{ cout<< "derived class is printed" <<endl; } 
void show () 
{ cout<< "derived class is shown" <<endl; } 
}; int main() 
{ 
bas *bptr; 
der d; 
bptr = &d; 
bptr->print(); 
bptr->show(); 
} 
