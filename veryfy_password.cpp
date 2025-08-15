#include<iostream>
#include<string>
#include<cctype>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 while(n--){
    int r;
  cin>>r;
    string pass;
    cin>>pass;
    string temp=pass;
    string temp2=pass;
    

    int count=0;

  
    for(int i=0;i<r-1;i++)
    {
      if(isalpha(pass[i]) &&  isdigit(pass[i+1]))
      {
        count++;
        
        break;
      }  
    }
    
    
    for(int i=0;i<pass.size()-1;i++)
    {
      if(pass[i]>pass[i+1])
      {
        count++;
        break;
      }
    }
    
    
    if(count==0)cout<<"Yes"<<endl;
    else {cout<<"No"<<endl;}


  }
 



    
    return 0;
}
