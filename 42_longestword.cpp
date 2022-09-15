#include<iostream>
using namespace std;
int main(){
    int i,n,ct=0,max=0;
    int start,end;
    cout<<"Enter the number of characters you want in your character array"<<endl;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cout<<"Enter the sentence =";
    cin.getline(arr,n);
    cin.ignore();
    for(i=0;i<n;i++)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(ct>max)
            {
                start=i-ct;
                end=i;
                max=ct;
            }
            ct=0;
        }
        else
        {
            ct++;
        }
    }
    cout<<"The length of the longest word is = "<<max<<endl;
    cout<<"The longest word = ";
    for(i=start;i<end;i++)
    {
        cout<<arr[i];
    }
    return 0;
}