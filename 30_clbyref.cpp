#include<iostream>
using namespace std;
int swappointer(int* a,int* b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    cout<<"a="<<*a<<" "<<"b="<<*b<<endl;
    return 0;
}
int main(){
    int a=9,b=7;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    swappointer(&a, &b);
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    return 0;
}