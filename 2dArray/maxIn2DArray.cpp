#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int max=INT_MIN;
    int m;
    cout<<"enter the no of row";
    cin>>m;
    int n;
    cout<<"enter the no of column";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max<arr[i][j])max=arr[i][j];
        }
    }
    cout<<"the maiximum in the array is"<<max;
    
    
}