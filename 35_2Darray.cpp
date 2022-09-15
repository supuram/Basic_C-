#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows"<<endl;
    cin>>m;
    cout<<"Enter number of columns"<<endl;
    cin>>n;
    int i,j;
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter "<<i<<j<<" th element = "<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"The matrix is"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}