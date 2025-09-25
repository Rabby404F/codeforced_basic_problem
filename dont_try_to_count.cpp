#include<iostream>
#include<string>
using namespace std;

int main()
{   int t;
    cin>>t;
    while(t--){
    int x,y;
    cin>>x>>y;
    string s,sub;
    cin>>s>>sub;
    int p=sub.length();

    int count=0;
    while(1)
    {  
       
        
        if(s.find(sub)!= string::npos)
        {
            break;
        }
        else if(s.length()>sub.length()*50)
        {
            count=-1;
            break;
        }
            s=s+s;
            count++;
        
    }
    cout<<count<<endl;
}
}
