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

  
    for(int i=0;i<r;i++)
    {
      if(isalpha(pass[i]) &&  isdigit(pass[i+1]))
      {
        count++;
        
        break;
      }  
    }
    for(int i=0;i<pass.size();i++)
    {
      if(isdigit(pass[i]))
      {
        pass.erase(i,1);
      }
    }
    cout<<pass<<endl;
    for(int i=0;i<pass.size();i++)
    {
      if(pass[i]>pass[i+1])
      {
        count++;
        break;
      }
    }
    for(int i=0;i<temp.size();i++)
    {  
      if(isdigit(temp[i]))
      {
        cout<<i<<" ";
      }
    }
      cout<<temp<<endl;


  }
 



    
    return 0;
}
