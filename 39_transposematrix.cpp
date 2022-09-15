#include<iostream>
using namespace std;
int main(){
    int r,c;  //r denotes number of rows and c denotes number of columns
    cout<<"Enter number of rows"<<endl;
    cin>>r;
    cout<<"Enter number of columns"<<endl;
    cin>>c;
    int i,j,swap;
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter "<<i<<j<<" th element = "<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix in normal order is"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=i;j<c;j++)
            {
                swap=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=swap;
            }
        }
        cout<<"Transposed matrix after swapping of elements is"<<endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"The transposed matrix is"<<endl;
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
        cout<<"The transposed matrix by transferring value to another array is"<<endl;
        int arr1[c][r];
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                arr1[i][j]=arr[j][i];
            }
        }
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                cout<<arr1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}