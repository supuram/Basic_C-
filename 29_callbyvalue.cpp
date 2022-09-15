#include<iostream>
using namespace std;
int swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    return 0;
}
int main(){
    int a=9,b=7;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    swap(a,b);
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    return 0;
}