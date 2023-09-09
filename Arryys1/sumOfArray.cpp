#include<iostream>
using namespace std;
int main()
{
    int n;
    //taking input from the user
    cout<<"enter the size of an array";
    cin>>n;
    cout<<"enter the element in an array";
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    //calculating the sum of an array
    int sum=0;
    for(int i=0;i<=n-1;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
}