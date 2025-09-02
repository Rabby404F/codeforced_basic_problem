#include<iostream>
#include<string>
using namespace std;
int main()
{ int t;
    cin>>t;
    while(t--)
    {
   string s;
   cin>>s;
   if(s.length()==1)cout<<"0"<<endl;
   else{
   char *ptr;
   char *lptr;
   int r=0;
   for(int i=0;i<s.length();i++)
   {
        if (s[i]=='1' && r==0)
        {
            ptr=&s[i];
            r++;
        }
        else if(s[i]=='1' && r!=0)
        {
            lptr=&s[i];
            
        }
   }   //i use pointer to solve this problem 
  
   int zero_count=0;
   for(char *p=ptr;p<=lptr;p++)
   {
    if(*p=='0')zero_count++;
   }
   cout<<zero_count<<endl;
}
}
   
}