#include<iostream>
using namespace std;
int primenum(int num){
    int i,c=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        cout<<num<<" is a prime number"<<endl;
    }
    else
    {
        cout<<num<<" is not a prime number"<<endl;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    primenum(n);
}