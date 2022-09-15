#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter size of the array = ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<"th array = "<<endl;
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}