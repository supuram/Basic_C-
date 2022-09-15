#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i==4)
        {
            break;
        }
        for(j=1;j<=i;j++)
        {
            cout<<j;
            if(j==3)
            {
                break;
            }
        }
        cout<<endl;
    }
}