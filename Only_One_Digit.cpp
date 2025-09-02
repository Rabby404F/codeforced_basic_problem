#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
   string s;
   cin>>s;
   vector<int>v;
   for(int i=0;i<s.length();i++)
   {
    string t;
    t=t+s[i];
    int n=stoi(t);
    v.push_back(n);

   }
   sort(v.begin(),v.end());
   cout<<v[0]<<endl;
}
   

}