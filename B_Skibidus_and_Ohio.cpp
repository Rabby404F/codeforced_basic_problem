#include<iostream>
#include<string>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  string s;
  cin>>s;

  int n=s.length();
  
  
  int cnt;
do{
  cnt=0;
  for(int i=0;i<n-1;i++)
  { 
    if(s[i]==s[i+1])
    {
        s[i]=s[0];
        s.erase(i+1,1);
        n--;
        
    }

    for(int j=0;j<n;j++)
    {
      if(s[j]==s[j+1])cnt++;
    }
  }
}while(cnt!=0);

  cout<<s.length()<<endl;
  
 
}

}