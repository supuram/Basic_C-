#include<iostream>
using namespace std;
int selectionsort(int arr[],int n){
    int i,j,a;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                a=arr[j];
                arr[j]=arr[i];
                arr[i]=a;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int num[n];
    int i;
    for (i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" th array"<<endl;
        cin>>num[i];
    }
    selectionsort(num,n);
    return 0;
}