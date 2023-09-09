#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i!=0)
        {
            sum=sum+i;
        }
        else{
            sum=sum-i;
        }
    }
    cout<<"the alternate sum is "<<sum;
}