#include<iostream>
using namespace std;
int main(){
    int a=8;
    int* b=&a;   //here int* is the pointer which points towards the address of a in the RAM
    cout<<"The address of a= "<<b<<endl;
    cout<<"The address of a= "<<&a<<endl;
    cout<<"The value at address b= "<<*b<<endl;
    int** c=&b;  
    cout<<"The address of b = "<<c<<endl;
    cout<<"The value at address c= "<<*c<<endl;
    cout<<"The value at address of address of c= "<<**c<<endl;
}