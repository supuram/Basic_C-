#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int srh){
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
    int mid=(0+n)/2;
    int b=0;
    for(i=b;i<n;i++)
    {
        mid=(b+n)/2;
        if(srh<arr[mid])
        {
            n=mid;
            continue;
        }
        else if(srh>arr[mid])
        {
            b=mid;
            continue;
        }
        else if(srh==arr[mid])
        {
            cout<<"index of searched element = "<<mid<<endl;
            break;
        }
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
    int srh;
    cout<<"Enter the number you want to search = ";
    cin>>srh;
    binarysearch(num,n,srh);
    return 0;
}