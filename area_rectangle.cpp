// C++ program to find area of a rectangle//
*********************************************

#include <iostream> 
using namespace std; 
int rect(int, int); 
float rect (double, double); 
int main() 
{ 
int a, b; 
double c, d; 
cout<<"Enter the sides of the rectangle (as whole number)"<<"\n"; 
cin>>a>>b; 
cout<<"Area = "<<rect(a, b); 
cout<<"\n"<<"Enter the sides of the rectangle "<<"\n"; 
cin>>c>>d; 
cout<<"Area = "<<rect(c, d);
} int rect(int a, int b) 
{ 
return(a*b);
} float rect(double c, double d) 
{
 return(c*d);
}
