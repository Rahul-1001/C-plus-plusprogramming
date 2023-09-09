#include<iostream>
using namespace std;
void linearsearch(int arr[][3],int row,int col)
{
    int key=11;
    if(arr[3][3]==key)
    {
        cout<<"the key is available"<<key<<endl;
    }
    else
    cout<<"not available"<<endl;

  
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
    linearsearch(arr,row,col);
    return 0;

}
