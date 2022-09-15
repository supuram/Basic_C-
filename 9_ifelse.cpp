#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a ="<<endl;
    cin>>a;
    cout<<"Enter value of b ="<<endl;
    cin>>b;
    int sum, mul,fin;
    if(a>b){
        sum=a+b;
        cout<<"Sum="<<sum;
    }
    else if(a<b){
        mul=a*b;
        cout<<"Product="<<mul<<endl;
    }
    else{
        fin=(2*a)+b;
        cout<<"Result="<<fin;
    }
}