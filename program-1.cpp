#include<iostream>
using namespace std;
int main()
{
char op;
double n1,n2;
cout<<"enter operator +or-or*or/";
cin>>op;
cout<<"enter 2 numbers"
cin>>n1>>n2;
switch(op)
{
case '+':
cout<<n1+n2;
break;
case '-':
cout<<n1-n2;
break;
case '*':
cout<<n1*n2;
break;
case '/':
cout<<n1/n2;
break;
}
return 0;
}
