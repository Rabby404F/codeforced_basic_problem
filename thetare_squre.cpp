#include <iostream>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
  int r;
  if(m>a || n>a)
  {
     r=(n-a)+(m-a);
  }
  else if(n==m && m==a)
  {
    r=1;
  }
  cout<<r<<endl;

}