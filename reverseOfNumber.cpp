#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int reverse=0;
    int last_digit=0;
    while(n>0)
    {
        reverse=reverse*10;
        last_digit=n%10;
        reverse=reverse+last_digit;
        n=n/10;
    }
    cout<<"the reverse of number is "<<reverse;
}