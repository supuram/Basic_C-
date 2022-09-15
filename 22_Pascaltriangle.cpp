#include<iostream>
using namespace std;

int factorial(int n)
{
    int i,p=1;
    if(n==0)
    {
        p=1;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            p=p*i;
        }
    }
    return p;
}
int main(){
    int r;
    cout<<"Enter number of rows = "<<endl;
    cin>>r;
    int i,j,res;
    for(int i=0;i<=r-1;i++)
    {
        for(j=0;j<=i;j++)
        {
           res=factorial(i)/(factorial(j)*factorial(i-j));
           cout<<res<<" ";
        }
        cout<<endl;
    }    
    return 0;
}