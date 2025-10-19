#include<iostream>
#include<algorithm>
using namespace std;
int main()
{    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long lo9 j;
    long long cnt=0;
    for(long long i=1;i<=n;i++){
        j=i;
    string s=to_string(j);
    long long x= unique(s.begin(),s.end())-s.begin();
    if(x==1)cnt++;
    
    
    }
    cout<<cnt<<endl;
}
}
