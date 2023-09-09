#include<iostream>
using namespace std;
int main()
{
    int n;
   
    
    cout<<"enter the size of an array ";
    cin>>n; 
    int arr[n];
    cout<<"enter the element in array ";
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter the element you want to search";
    cin>>x;
    bool found=false;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==x)
        {
            found=true;
            break;
        }     
    }
    if(found)
    {
        cout<<"the element is present";
    }
    else{
        cout<<"the element is not present";
    }
    return 0;
}
