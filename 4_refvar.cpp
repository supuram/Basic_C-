#include<iostream>
using namespace std;
int s=999;
int main(){
    int a,b;
    cout<<"Enter first number\n";
    cin>>a;
    cout<<"Enter second number\n";
    cin>>b;
    int s=a+b;
    cout<<"Sum= "<<s<<endl;
    cout<<"Global s ="<<::s<<endl;  //fetches the value of global variable s
    float d=89.99f;
    long double e=89.99l;
    cout<<"Float ="<<d<<endl<<"Long Double ="<<e<<endl;
    cout<<"The size of 89.99 ="<<sizeof(89.99)<<endl;
    cout<<"The size of 89.99f ="<<sizeof(89.99f)<<endl;
    cout<<"The size of 89.99F ="<<sizeof(89.99F)<<endl;
    cout<<"The size of 89.99l ="<<sizeof(89.99l)<<endl;
    cout<<"The size of 89.99L ="<<sizeof(89.99L)<<endl;
}