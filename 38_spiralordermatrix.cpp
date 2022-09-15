#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows"<<endl;
    cin>>r;
    cout<<"Enter number of columns"<<endl;
    cin>>c;
    int i,j;
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
    cout<<"The matrix in spiral order is"<<endl;
    int rstart=0,rend=r-1,cstart=0,cend=c-1,col,row;
    while(rstart<=rend && cstart<=cend)
    {
        if(rstart<=rend && cstart<=cend)
        {
            for(col=cstart;col<=cend;col++)
            {
                cout<<arr[rstart][col]<<" ";
            }
        }
        rstart++;
        if(rstart<=rend && cstart<=cend)
        {
            for(row=rstart;row<=rend;row++)
            {
                cout<<arr[row][cend]<<" ";
            }
        }
        cend--;
        if(rstart<=rend && cstart<=cend)
        {
            for(col=cend;col>=cstart;col--)
            {
                cout<<arr[rend][col]<<" ";
            }
        }
        rend--;
        if(rstart<=rend && cstart<=cend)
        {
            for(row=rend;row>=rstart;row--)
            {
                cout<<arr[row][cstart]<<" ";
            }
        }
        cstart++;
    }
    return 0;
}