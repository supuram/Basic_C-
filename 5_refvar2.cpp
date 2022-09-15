#include<iostream>
using namespace std;
int main(){
    float x=77;
    float & y=x;   //y is a reference variable
    cout<<x<<endl;
    cout<<y<<endl;
    int k = 55;
    float l = 67.88;
    cout<<"Value of a ="<<float(k)<<endl;
    cout<<"Value of b ="<<int(l)<<endl;
    cout<<"k+l="<<k+l<<endl;
    cout<<"k+l ="<<k+int(l)<<endl;
}