#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int r;
        cin>>r;
        s.insert(r);
    }
    if(s.size()==0 ||s.size()==1)cout<<"NO"<<endl;
    else{
    s.erase(s.begin());
    cout<<*s.begin()<<endl;
    }
}