#include<iostream>
using namespace std;
int main() {
    int arr[]={3,1,2,4,0,6};
   int  sum=5;
   int count=0;
   for(int i=0;i<=4;i++)
   {
      for(int j=i+1;j<=4;j++)
      {
        {
            for(int k=j+1;k<=4;k++)
            {
                if((arr[i]+arr[j]+arr[k])==sum)
                {

                      
           count++;
        
                }
            }
        }
        
      
      }
   }
   cout<<count<<endl;
    return 0;


    }