#include<iostream>
// #include<limits.h>
using namespace std;
void transpose(int arr[][3],int row,int col){
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}
void printarray(int arr[][3],int row,int col)
{
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 

    }
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

     printarray(arr,row,col);
     transpose(arr,row,col);
    printarray(arr,row,col);

   return 0;
    

}
