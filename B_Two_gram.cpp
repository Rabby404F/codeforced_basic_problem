#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
     int n;
     cin>>n;
     string s;
     cin>>s;
     vector<string>v;
     map<string,int>m;
     for(int i=0;i<s.size()-1;i++)
     {    
       
       string temp;
        temp.push_back(s[i]);
        temp.push_back(s[i+1]);

       v.push_back(temp);
     }
     
    
    for(auto u:v)m[u]++;
    
    int top=m[v[0]];
    string t=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(m[v[i]]>top)
        {
            top=m[v[i]];
            t=v[i];
        }
    }
    cout<<t<<endl;
return 0;
}