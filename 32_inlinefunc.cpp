#include<iostream>
using namespace std;
inline int pdt(int a,int b)
{
    return a*b;
}
int main()
{
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    cout<<pdt(a,b);
    return 0;
}