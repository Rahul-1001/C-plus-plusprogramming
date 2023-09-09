#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v)

{
    int no0=0;
    int no1=0;
    int i=0;
    int j=v.size()-1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
        {
           
            no0++;

        }
        if(v[i]==1)
        {
            no1++;
        }

    }
     for(int i=0;i<v.size();i++)
     {
        if(i<no0)
        {
            v[i]=0;
        }
        else{
            v[i]=1;
        }
     }

}

int main()
{
    
   vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0); 
    v.push_back(1);
    sort01(v);
      // Print the sorted vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}