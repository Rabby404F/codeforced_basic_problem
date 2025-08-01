#include <iostream>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    int r = a * a;
    int count=1;
    if((m*n)==r)cout<<1<<endl;
    else {
  int i=1;
  while(1)
  {  r=r*i;
    if((n*m)<r)break;
    else{count=count*i;}
    i++;
    
  }
  cout<<count<<endl;
}

}