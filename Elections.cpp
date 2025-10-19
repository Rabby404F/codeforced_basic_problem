#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--){
    long long arr[3];
   for(long long i=0;i<3;i++)
   {
    cin>>arr[i];
   }
   long long m=max(arr[0],max(arr[1],arr[2]));
   long long maximum=m+1;
  

   if(arr[0]==arr[1]&& arr[1]==arr[2])
   {
    cout<<"1 1 1"<<endl;
   }
   else{
   
   if(arr[0]<m)
   {cout<<(maximum-arr[0])<<" ";}
   else cout<<"0 ";
    if(arr[1]<m)
{cout<<(maximum-arr[1])<<" ";}
   else cout<<"0 ";
    if(arr[2]<m)
   {cout<<(maximum-arr[2])<<endl;}
   else cout<<"0"<<endl;;
}
    }
   

}