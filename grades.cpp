//C++ program to find the grades of student by finding sum and average of marks//
**********************************************************************************

#include <iostream>
using namespace std; 
int main() 
{ 
int mark[5][3]; 
int i,j,s; 
float grade; 
char *subj[5]={"Malayalam","Electronics","English","Maths","Science"}; 
char *list[3]={"Student 1","Student 2","Student 3"}; 
int sum, sort[3]; 
for(j=0;j<3;j++) 
{ 
sum=0; 
cout<<"Mark list of "<<list[j]<<":\n"; 
for(i=0;i<5;i++) 
{ cout<<"Enter the score for "<<subj[i]<<"(Max 50):"; 
cin>>mark[i][j]; 
sum+=mark[i][j]; 
} cout<<"The total score of "<<list[j]<<" is:"; 
cout<<sum << " out of 250"; 
sort[j]=sum; 
cout<<endl; 
grade= sum*100/250; 
cout<<"Your Grade is "; 
if(grade>90) 
{ 
cout<<"A+ \n"; 
} 
else if(grade>80 && grade<=90) 
{ 
cout<<"A \n"; 
} 
else if(grade>70 && grade<=80) 
{ 
cout<<"B \n"; 
} 
else if(grade>60 && grade<=70) 
{ 
cout<<"C \n"; 
} 
else if(grade>50 && grade<=60) 
{ 
cout<<"D \n"; 
} 
else 
{ 
cout<<"F \n"; 
} 
cout<<endl; 
} for(j=2;j>=0;j--) 
for(i=0;i<j;i++) 
{ if(sort[i]<sort[i+1]) 
{ s=sort[i+1]; 
sort[i+1]=sort[i]; 
sort[i]=s; 
} 
}
cout<<"Maximum mark scored is :"<<sort[0]<<endl; 
cout<<"Minimum mark scored is :"<<sort[2]<<endl; 
}
