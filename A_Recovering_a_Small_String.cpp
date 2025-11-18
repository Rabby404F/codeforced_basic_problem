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
  int t;
  cin>>t;
  while(t--){
     int x;
     cin>>x;
     
     map<int,char>m;
     char ch='a';
     for(int i=1;i<=26;i++)
     {
        m[i]=ch;
        ch++;

     }
  
    string temp;
    if(x>=28)
    {
      temp+=m[26];
      x-=26;
    }
    else
    {
      temp+=m[x-2];
      x-=x-2;
    }
    if(x>=27)
    {
      temp+=m[26];
      x-=26;
    }
     else
    {
      temp+=m[x-1];
      x-=x-1;
    }

    if(x>=26)
    {
      temp+=m[26];
      x-=26;
    }
     else
    {
      temp+=m[x];
    }
    reverse(temp.begin(),temp.end());
    cout<<temp<<endl;

  }
return 0;
}