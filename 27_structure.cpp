#include<iostream>
using namespace std;
struct employee
{
    int id;
    char name;
    int arr[10];
};  /*in structure you can't hide the variables. So you can access structure from anywhere in a program
So you can't keep a structure private. Also you can't put functions in a structure. To remove these
constraints we bring in class*/
union money
{
    int rice;
    char car;
};  /*union allocates only one data type to memory. Say you are using int then you can't use char. 
Say you have allocated value to int and then to char, then only the char value will be printed as the 
int will be overwritten*/
int main(){
    union money m1;
    m1.rice=45;
    m1.car='y';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    struct employee supra[10];
    int i;
    for(i=0;i<10;i++)
    {
        supra[i].id=i*i;
        cout<<supra[i].id<<" ";
    }
    cout<<endl;
    struct employee alok;
    alok.id=88;
    alok.name='h';
    cout<<alok.name<<endl<<alok.id<<endl;
    struct employee krishna;
    for(i=0;i<10;i++)
    {
        krishna.arr[i]=i*i*i;
        cout<<krishna.arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}