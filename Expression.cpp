#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    int sum=a+b*c;
    v.push_back(sum);
    sum=a*(b+c);
    v.push_back(sum);
    sum=a*b*c;
    v.push_back(sum);
    sum=(a+b)*c;
    v.push_back(sum);
    sum=a+b+c;
    v.push_back(sum);
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[0]<<endl;
    return 0;
}
