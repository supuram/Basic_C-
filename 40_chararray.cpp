#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of characters you want in your character array"<<endl;
    cin>>n;
    char arr[n+1];
    cout<<"Enter the character array"<<endl;
    cin>>arr;
    cout<<"The array = "<<arr;
    return 0;
}