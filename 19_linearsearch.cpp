#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int sr){
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==sr)
        {
            j=j+1;
            cout<<"Index of the search element = "<<i<<endl;
        }
        else{
            continue;
        }
    }
    if(j==0)
    {
        cout<<"Element not found";
    }
    else{
        cout<<"Number of times the search element found = "<<j<<endl;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the size of the array = "<<endl;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<"th number = "<<endl;
        cin>>num[i];
    }
    int sr;
    cout<<"Enter the number you want to search in the array = "<<endl;
    cin>>sr;
    linearsearch(num,n,sr);
}