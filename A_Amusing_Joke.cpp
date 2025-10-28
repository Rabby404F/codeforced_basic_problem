#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s>>s1>>s2;
   
      string  s3=s+s1;
      sort(s3.begin(),s3.end());
      sort(s2.begin(),s2.end());

      if(s3==s2)cout<<"YES"<<endl;
      else cout <<"NO"<<endl;
      
}