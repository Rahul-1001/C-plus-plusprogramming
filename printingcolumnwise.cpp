#include<iostream>
using namespace std;
void printingcolwisesum(int arr[][3],int row,int col)
{
    //   printing the row sum
    //    int sum=0;
    for(int i=0;i<row;i++)
    { 
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
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
            cin>>arr[j][i];
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
    printingcolwisesum(arr,row,col);
    return 0;

}
