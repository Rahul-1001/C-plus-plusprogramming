#include<iostream>
using namespace std;
int main()
{
    int n;
     cout<<"enter a number";
     cin>>n;
      int count=0;
      int last_digit=0;
      int sum=0;
     while(n>0)
     {
        
       last_digit= n%10;
       sum=sum+last_digit;
        n=n/10;

     }
         cout<<"the sum of number is"<<sum;
     return 0;
}