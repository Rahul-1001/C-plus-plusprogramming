 #include<iostream>
 #include<vector>
 using namespace std;

 int main()
 {
    vector<int>v;
  v.push_back(9);
  v.push_back(4);
  v.push_back(6);
  v.push_back(2);
  v.push_back(1);
   v.push_back(9);
  v.push_back(4);
  v.push_back(6);
 int x=10;
 for(int i=0;i<v.size();i++)
 {
    for(int j=i+1;j<v.size();j++)
    {
        if(v[i]+v[j]==x)
        {
            cout<<"the sum of pair is"<<v[i]<<" "<<"and" <<" "<<v[j];
            cout<<endl;
        }
    }
 }
 
 
    
 }