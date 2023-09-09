#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int target)
{
int start=0;
int end=size-1;

while(start<=end)
{
    int mid=start+(end-start)/2;
    int element=arr[mid];
    if(element==target)
    {
        return mid;
    }
    else if(target<element)
    {    //search in left
        end=mid-1;
    }
    else{
        //search in right 
        start=mid+1;
    }
        mid=start+(end-start)/2;

}
//not found
return -1;
}
int main()
{
    int arr[]={2,4,6,8,10,12};
    int size=7;
    int target=2;
    int indexoftarget = binarySearch(arr,size,target);
    if(indexoftarget==-1)
    {
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"target found at index"<<indexoftarget<<"index"<<endl;
    }
    return 0;
}