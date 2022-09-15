#include <iostream>
using namespace std;
int glo=99;
void sum(){
    int k=4;
    cout<<"k="<<k<<endl;
    cout<<"glo="<<glo;
}

int main() 
{
    int glo=56;
    int a=8;
    int b=9;
    int s=a+b;
    cout<<"hello"<<s;
    sum();
    cout<<"local="<<glo;
	return 0;
}