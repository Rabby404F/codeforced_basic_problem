#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{    int t;
    cin>>t;
    while(t--)
    {int n;
        cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int r=unique(s.begin(),s.end())-s.begin();
    int cnt=(n*2)-(n-r);
   
    cout<<cnt<<endl;
}

}