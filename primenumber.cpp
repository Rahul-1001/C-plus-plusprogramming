#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    bool flag=true;
    //check for composite number
    //if a number is composite then it would not be prime 
    //composite:=> those who have more factor than itself and 1;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=false;  //false means composite
            break;
        }
    }
    if(flag==true)
    {
        cout<<"the given number is prime number";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}