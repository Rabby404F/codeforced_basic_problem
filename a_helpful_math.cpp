#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    
    
     int n =s1.size();
      for(int i=0;i<s1.size();i++)
   {
    
    if(s1[i]=='+')
    {
        s1.erase(i,1);
        i--;
    }
   }
     sort(s1.begin(),s1.end());
     

     for(int i=0;i<s1.size();i++)
     {  
        cout<<s1[i];
       if(i < s1.size() - 1)
        cout << '+';
      
     }
     

     
    
   
   
   
   
   
    

}