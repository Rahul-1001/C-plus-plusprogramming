#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6]={12,13,11,43,23,65};
    int max= INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
      for(int i=0;i<6;i++)
    {
        if(arr[i]!=max && smax<arr[i] )
        {
            smax=arr[i];
        }
    }
    cout<<smax<<endl;
    return 0;



}