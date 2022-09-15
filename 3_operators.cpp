#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter first number\n";
    cin>>a;
    cout<<"Enter second number\n";
    cin>>b;
    float sum, sub, mul, div, rem;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=(float)a/b;
    rem=a%b;
    c=++a;
    d=a++;
    cout<<"Sum ="<<sum<<endl;
    cout<<"Difference ="<<sub<<endl;
    cout<<"Product ="<<mul<<endl;
    cout<<"Division ="<<div<<endl;
    cout<<"Remainder ="<<rem<<endl;
    cout<<"a++ ="<<d<<endl;
    cout<<"++a ="<<c<<endl;
}