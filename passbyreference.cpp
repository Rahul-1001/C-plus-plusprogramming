#include<iostream>
using namespace std;
 void changevalue(int &z,int &p){
z=100;
p=200;
 }

int main()
{
    int a=5;
    int b=10;
    changevalue(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}