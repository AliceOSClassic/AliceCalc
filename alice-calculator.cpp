//Alice Calculator++
#include<iostream>
#include<iomanip>
using namespace std;
long double calculations (float a, float b, char op){
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the operator: ";
    cin>>op;
    switch(op){
        case '+':
        case 'a':
            cout<<endl<<a<<" + "<<b<<" = "<<a+b<<endl;
            break;
        case '-':
        case 's':
            cout<<endl<<a<<" - "<<b<<" = "<<a-b<<endl;
            break;
        case '*':
        case 'm':
            cout<<endl<<a<<" * "<<b<<" = "<<a*b<<endl;
            break;
        case '/':
        case 'd':
            cout<<endl<<a<<" / "<<b<<" = "<<a/b<<endl;
            break;
        default:
            cout<<"Invalid operator"<<endl;
    }
    return 0;
}
int main(){
    system("clear");
    cout<<"Alice Calculator++"<<endl;
    float n1,n2;
    char op, option;
    beginning:
    cout<<endl<<"Choices:"<<endl<<"1 = Basic operations\nq/e = Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>option;

    if (option=='1'){
    calculations(n1,n2,op);
    goto beginning;
    }
    else if (option=='e' | option=='E' | option=='q' | option=='Q'){
        cout<<"Exiting..."<<endl;
        return 0;
    }
    else{
        cout<<"Invalid option"<<endl;
        goto beginning;
    }
    return 0;
}