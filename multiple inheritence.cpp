// Example of a  Cpp program to derive the sub classes from the base classes using multiple inheritance //
***********************************************************************************************************
#include <iostream> 
using namespace std; 
class student1{ 
public: 
int r; 
void getexpense1() { 
cout<<"Enter the expense of student1"<<endl; 
cin>>r; 
} 
}; 
class student2 { 
public: int s; 
void getexpense2()
{ 
cout<<"Enter the expense of student2"<<endl; 
cin>>s; 
} 
}; class totalexpense: public student1, public student2 { 
public: 
void gettotal() { 
cout << "Total expense is: " << s+r ; 
} 
}; int main() { 
totalexpense obj; 
obj.getexpense1(); 
obj.getexpense2(); 
obj.gettotal(); 
return 0; 
}
