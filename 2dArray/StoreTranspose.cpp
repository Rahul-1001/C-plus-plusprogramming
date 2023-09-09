#include<iostream>
using namespace std;
int main()
{
     
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
     //new array for transpose
     int t[n][m];
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            t[i][j]=arr[j][i];
        }
     }
     //prinnting transpose
          for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
           cout<<t[i][j]<<"";
        }
     }
     cout<<endl;

}