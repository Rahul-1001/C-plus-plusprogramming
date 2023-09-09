#include<iostream>
using namespace std;
string name="rahul";

void fun()
{
    cout<<name<<endl;
}
int main()
{
    cout<<name<<endl;
    name="gupta";
    fun();
    return 0;
}