// Example of a Cpp program with polymorphism. //
*************************************************
#include <iostream>
using namespace std;
class student1{
public:
int ex1,ex2;
void getexpense() {

cout<<"Enter the expense1 and expense2 of student1: "<<endl;
cin>>ex1>>ex2;
cout<< "Total expense of student1: "<<ex1+ex2<<endl;
}
};

class student2 {
public:
int ex3,ex4;
void getexpense() {

cout<<"Enter the expense1 and expense2 of student2: "<<endl;
cin>>ex3>>ex4;
cout<< "Total expense of student1: "<<ex3+ex4<<endl;
}
};

class totalexpense: public student1, public student2 {
public:
void getexpense() {

student1::getexpense();
student2::getexpense();

}
};
int main() {
totalexpense obj;
obj.getexpense();
return 0;
}
