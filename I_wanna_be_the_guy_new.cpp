#include<iostream>
#include<set>
using namespace std;

int main()
{
  int n ;
  cin>>n;
  set<int>s;
  int m;
  cin>>m;
  for(int i=0;i<m;i++){
    int r;
    cin>>r;
    s.insert(r);
  }
  int o;
  cin>>o;
  for(int i=0;i<o;i++){
    int x;
    cin>>x;
    s.insert(x);
  }
  if(s.size()==n)cout<<"I become the guy."<<endl;
  else cout<<"Oh, my keyboard!"<<endl;
}