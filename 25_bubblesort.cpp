#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    int i,j,swap,k=1;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" th array"<<endl;
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<(n-k);j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
        k++;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
