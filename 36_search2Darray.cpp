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
    int srh,k,lp; 
    cout<<endl;
    do
    {
        cout<<"Enter number you want to search = ";
        cin>>srh;
        cout<<endl;
        k=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i][j]==srh)
                {
                    k++;
                }
            }
        }
        cout<<srh<<" found "<<k<<" times"<<endl;
        cout<<"Do you want to search for more numbers, if yes enter 1 = ";
        cin>>lp;
    }while(lp==1);
    return 0;
}