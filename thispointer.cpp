// Example of a Cpp  program to introduce a “this pointer” to access the private members of a class when local variable name is same as member’s name? //
 *********************************************************************************************************************************************************
 
#include <iostream> 
using namespace std; 
class sample { 
private: 
int num; 
char ch; 
public: 
void setvalues(char ch, int num) 
{ 
this->num =num; 
this->ch=ch; 
} 
void displayvalues() 
{ 
cout<<ch<<endl; 
cout<<num; 
} }; int main() 
{ 
sample obj; 
obj.setvalues( 'A',100); 
obj.displayvalues(); 
return 0;
}

