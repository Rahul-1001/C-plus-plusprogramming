#include<iostream>
#include<limits.h>
using namespace std;
int minimumelement(int arr[][3],int row,int col)
{
    //   printing the row sum
    //    int sum=0;
    int mini=INT_MAX;
    for(int i=0;i<row;i++)
    { 
         
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]<mini)
            {
                mini=arr[i][j];
            }
        }
        
      
    }
    return mini;
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
    int mini=minimumelement(arr,row,col);
    cout << "miniimum element in the array: " << mini << endl;
   return 0;
    

}
