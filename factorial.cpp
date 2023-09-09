#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    int product=1;
   for(int i=n;i>=1;i--)
 {
       product=product*i;
 }
 cout<<"the factorial is "<<product;
}