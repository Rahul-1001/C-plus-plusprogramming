#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter the row of 1st matrix";
    cin>>m;
     int n;
    cout<<"enter the col of 1st matrix";
    cin>>n;
     int p;
    cout<<"enter the row of 2nd matrix";
    cin>>p;
     int q;
    cout<<"enter the col of 2nd matrix";
    cin>>q;
    if(n==p)
    {
        int a[m][n];
        int b[p][q];
        cout<<"enter element of 1st matrix";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
         cout<<"enter element of 2nd matrix";
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                cin>>b[i][j];
            }
        }
        //resultant matrix
        int res[m][q];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                //multiply
                res[i][j]=0;
                for(int k=0;k<p;k++)
                {
                    res[i][j]=res[i][j]+a[i][k]*b[k][j];
                }
            }
        }
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
               cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    else{
        cout<<"the matrix cannot be multiplied";
    }

}