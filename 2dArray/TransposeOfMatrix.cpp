#include<iostream>
using namespace std;
int main()
{
     int sum=0;
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
    cout<<endl;
       for(int i=0;i<m;i++)  //row
    {
        for(int j=0;j<n;j++)   //col
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //printing transpose
       for(int j=0;j<n;j++)
     {
        for(int i=0;i<m;i++)
        {
            cout<<arr[i][j]<<" ";    //remember
        }
        cout<<endl;
     }
}