#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int l;
    cin>>l;
    int p;
    cin>>p;
    int arr[p];
    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
    }
    int a;
    cin>>a;
   int arr2[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr2[i];
    }
    int temp;
    if(p>a)temp=p;
    else{temp=a;}
    
  int flag=0;
  for(int i=1;i<=l;i++)
  {   for(int j=0;j<temp;j++)
    {
        if(arr[j]==i || arr2[j]==i)
        {
            cout<<"con"<<endl;
            cout<<i<<endl;
            continue;
            
        }
      
    }
      cout<<"good b"<<endl;
    
  }
  cout<<flag;
}