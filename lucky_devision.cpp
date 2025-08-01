#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int r=n;
  
  int flag=0;
    while(n!=0)
    {
       int rem=n%10;
      
       if(rem==7 || rem==4)
       {
        
       }
       else{flag++;
    break;}
        
       n=n/10;
    }
   
   if(flag==1)
   {
      if(r%7==0 || r%4==0 || r%44==0 || r%77==0 || r%47==0 ||r%74==0)
      {
         flag=0;
      }
   }
   
   if(flag==0){cout<<"YES"<<endl;}
   else{cout<<"NO"<<endl;}
    
    }
   


