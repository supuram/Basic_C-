#include<iostream>
using namespace std;
int swappointer(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"swappointer()"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    cout<<"address of a="<<&a<<" "<<"address of b="<<&b<<endl;
    cout<<endl;
    return 0;
}
int main(){
    int a=9,b=7;
    cout<<"int main()"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    cout<<"address of a="<<&a<<" "<<"address of b="<<&b<<endl;
    cout<<endl;
    swappointer(a,b);
    cout<<"int main()"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    cout<<"address of a="<<&a<<" "<<"address of b="<<&b<<endl;
    return 0;
}