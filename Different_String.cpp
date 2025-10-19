#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--){
   string s;
   cin>>s;
   
    string r=s;
   int n=unique(s.begin(),s.end())-s.begin();
  
    
    if(n>1)
    {int i=0;
       
        while(1)
        {
            if(r[i]!=r[i+1])
            {
                char tmep=r[i];
                r[i]=r[i+1];
                r[i+1]=tmep;
              
                break;
            }
           ;
            i++;
        }
        cout<<"YES"<<endl;
        cout<<r<<endl;
    }
    else{cout<<"NO"<<endl;}
}
   
}
