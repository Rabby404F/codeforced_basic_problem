#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<cctype>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    map<int,char>m;
    vector<string>v;
    string ds;


    char ch='a';
    for(int i=1;i<27;i++)
    {
        m[i]=ch;
        ch++;
    }
    int n;
    cin>>n;
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
  for(int i=0;i<s.length();i++)
  {  
    if(s[i]=='0')
    {
        string temp2;
        temp2=s[i+2];
        temp2+=s[i+1];
        
        int num=stoi(temp2);
        ds.push_back(m[num]);
        i+=2;
    }
 else{
    string temp;
    temp=s[i];
    int r=stoi(temp);
    ds.push_back(m[r]);
 }

    
  }
  reverse(ds.begin(),ds.end());
  cout<<ds<<endl;
}
    
}
