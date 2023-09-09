#include<iostream>
using namespace std;
int main()
{
    int i,j;
    
    int m;
    cout<<"enter the no of row/column";
    cin>>m;
   
  
    int arr[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;

       for(int i=0;i<m;i++)  //row
    {
        for(int j=0;j<m;j++)   //col
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //transpose in the  same matrix 

        for(int i=0;i<m;i++)
     {
        for(int j=i+1;j<m;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;

        }
        cout<<endl;
     }
    


    // printing transpose
       for(int i=0;i<m;i++)
     {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";    //remember
        }
        cout<<endl;
     }
    
 
}