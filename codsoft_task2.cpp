#include<iostream>
using namespace std;
int main()
{

int choice;
int num1,num2;
cout<<"This is a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division and Allows the user to input two numbers and choose an operation to perform\n\n\n"<<endl;
cout<<"Enter two numbers for operation you want to perform: \n";
cin>>num1>>num2;

cout<<"\n1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n";
cout<<"Enter your choice : ";
cout<<"choice= ";
cin>>choice;
//cout<<"Enter two numbers for operation you want to perform: ";
//cin>>num1>>num2;
switch(choice)
{
    case 1:
        cout<<"addition="<<num1+num2;
        break;
    case 2:
        cout<<"subtraction="<<num1-num2;
         break;
    case 3:
        cout<<"multiplication="<<num1*num2;
         break;
    case 4:
        if(num2!=0)
        cout<<"division="<<(float)num1/num2;
        else
        cout<<"divide by zero not allowed";
         break;
    case 5:
        cout<<"remainder="<<num1%num2;
         break;
    default:
    cout<<"invalid operation!";
}
   return 0;
}