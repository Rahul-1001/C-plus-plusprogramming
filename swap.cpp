#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter num1"<<endl;
    cin>>num1;
    cout<<"\n enter num2 "<<endl;
    cin>>num2;
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    //swapping the values of two variables using a temporary variable.
    cout<<"After swapping: \n";
    cout<<"num1  "<<num1 <<endl<<"num2 "<<num2<<endl;
    return 0;
}