#include<iostream>
#include<limits.h>
using namespace std;
int maximumelement(int arr[][3],int row,int col)
{
    //   printing the row sum
    //    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<row;i++)
    { 
         
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>maxi)
            {
                maxi=arr[i][j];
            }
        }
        
      
    }
    return maxi;
}
int main()
{     
    int arr[3][3];
    int row=3;
    int col=3;
    // taking input from user
    for(int i = 0 ;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    // printing an array
          cout<<"printing the array"<<" ";
         for(int i = 0 ;i <row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int maxi=maximumelement(arr,row,col);
    cout << "Maximum element in the array: " << maxi << endl;
   return 0;
    

}
