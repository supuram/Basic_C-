#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of characters you want in your character array"<<endl;
    cin>>n;
    char arr[n+1];
    cout<<"Enter the character array"<<endl;
    cin>>arr;
    int i;
    int chk=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            break;
        }
        else
        {
            chk++;
        }
    }
    if(chk!=0)
    cout<<arr<<" is a palindrome"<<endl;
    else
    cout<<arr<<" is not a palindrome"<<endl;
    return 0;
}