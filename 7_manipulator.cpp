#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=3, b=22, c=456, d=8978;
    cout<<"Value of a without setw ="<<a<<endl;
    cout<<"Value of b without setw ="<<b<<endl;
    cout<<"Value of c without setw ="<<c<<endl;
    cout<<"Value of d without setw ="<<d<<endl;
    cout<<"Value of a without setw ="<<setw(4)<<a<<endl;   //setw(4) means it takes a total space of 4
    cout<<"Value of b without setw ="<<setw(4)<<b<<endl;
    cout<<"Value of c without setw ="<<setw(4)<<c<<endl;
    cout<<"Value of d without setw ="<<setw(4)<<d<<endl;
}