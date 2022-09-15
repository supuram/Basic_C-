#include<iostream>
using namespace std;
class employee
{
    private:int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata()
    {
        cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<"  "<<e<<endl;
    }
};
void employee::setdata(int a1,int b1,int c1)
{
    a=a1*a1;
    b=b1*b1;
    c=c1*c1;
}
int main(){
    employee supra;
    supra.d=89;  //supra.a=90 cannot be written because "a" is private
    supra.e=90;
    supra.setdata(3,4,5);
    supra.getdata();
    return 0;
}