#include<iostream>
using namespace std;
int main(){
    int num[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"enter the "<<i+1<<" th number"<<endl;
        cin>>num[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<num[i]<<endl;
    }
}