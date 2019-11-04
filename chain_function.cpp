 //A class level program with chain functions and constructor with parameters//
********************************************************************************
#include <iostream> 
#include <math.h> 
using namespace std; 
class absl 
{ 
private: 
int x; 
int y; 
int pro; 
public: 
absl& setx(int X) 
{ x = abs (X); 
return *this; } 
absl& sety(int Y) 
{ y = abs (Y); 
return *this; } 
absl& product() 
{pro=x*y; 
return *this;} 
absl& print() 
{cout << "absolute of X= "<<x<<endl; 
cout << "absolute of Y= "<<y<<endl; 
cout << "product = "<<pro; 
return *this;} 
}; 
int main() 
{ 
absl bar; 
bar.setx(-5).sety(6).product().print(); 
return 0; 
} 
