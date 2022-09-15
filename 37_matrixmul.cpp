#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"Enter number of rows"<<endl;
    cin>>r1;
    cout<<"Enter number of columns"<<endl;
    cin>>c1;
    int i,j,k;
    int arr1[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Enter "<<i<<j<<" th element = "<<endl;
            cin>>arr1[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"The 1st matrix is"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    int r2,c2;
    do
    {
        cout<<"Enter number of rows"<<endl;
        cin>>r2;
        cout<<"Enter number of columns"<<endl;
        cin>>c2;
    }while(r2!=c1);
    int arr2[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"Enter "<<i<<j<<" th element = "<<endl;
            cin>>arr2[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"The 2nd matrix is"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Matrix multiplication ="<<endl;
    int s;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            s=0;
            for(k=0;k<c1;k++)
            {
                s=s+(arr1[i][k]*arr2[k][j]);
            }
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}