#include<iostream>
#include<vector>
using namespace std;

int main()
{   int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
 
   int  s_sum=0;
   int  d_sum=0;
  
  int turn=1;

   
        while( !v.empty())
        { 
         if(turn==1)
        {
            if(v[0]>v.back())
            {
                s_sum+=v[0];
               
                v.erase(v.begin());
                
            }
            else 
            {
                s_sum+=v.back();
               v.pop_back();
            }
            turn=2;
            
        }
            else if(turn==2)
            {     
                  if(v[0]>v.back()){
                        d_sum+=v[0];
                        v.erase(v.begin());
                        
                    }
                     else 
                    {
                        d_sum+=v.back();
                       v.pop_back();
                    }
                    turn=1;
                   
            }   
        }
        cout<<s_sum<<" "<<d_sum<<endl;
        return 0; 
    }
   
