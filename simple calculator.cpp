#include<iostream>
#include<cmath>
using namespace std;
double addition(double a,double b) {
    return a+b;
}
double power (double a, double b) {
    return pow(a,b);
}

double squareRoot(double a) {
    return sqrt(a);
}

int main() {
    start:
    int first_number,second_number;
    int choice;
   while(true) {
        string operation[]={"1.Addition","2.Substraction","3.Multiplication","4.Division","5.Square Root","6.Power","7.Exit"};
        cout<<"===================================================="<<endl;
        cout<<"Select Operations:\n";
        for(int i=0;i<7;i++) {
    cout<<operation[i]<<endl;
        }
    cout<<"===================================================="<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;
   
    if(choice==7) 
    break;

    
if(choice==1||choice==2||choice==3||choice==4) {
        cout<<"Enter the first number: ";
        cin>>first_number;
        cout<<"Enter the second number: ";
        cin>>second_number;
    }
    else if(choice==5) {
            cout<<"Enter the number: ";
            cin>>first_number;
        }
    else if (choice==6){
        cout<<"Enter the base: ";
        cin>>first_number;
        cout<<"Enter the exponent: ";
        cin>>second_number;
    }
    else {
        cout<<"Invalid choice!";
        break ;
    }
switch(choice) {
case 1:
cout<<"result:"<<addition(firs_number,second_number)<<endl;
break;
case 2:

break;
case 3:

break;
case 4:

break;
case 5:
cout<<"Result:"<<squareRoot(first_number)<<endl;
break;
case 6:
cout<<"result:"<<power (first_number,second_number)<<endl;
break;
default:
        cout<<"Invalid input! please try again."<<endl;
    }
   
cout<<"Do you need another operation?"<<endl;
cout<<"1.Yes."<<endl;
cout<<"2.No."<<endl;
cin>>choice;
if(choice==2)

break;
else if(choice==1)
goto start;
else {
cout<<"Invalid input."<<endl;

    break;
}
}
return 0;
}
