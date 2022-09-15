#include<iostream>
using namespace std;

int baudhayan(int n)
{
    int a=0,b=1,sum,i;
    for(i=1;i<=n;i++)
    {
        cout<<a<<endl;
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    baudhayan(n);
    return 0;
}