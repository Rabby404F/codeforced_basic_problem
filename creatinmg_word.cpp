#include<iostream>
#include<string>
using namespace std;

int main()
{  int n;
    cin>>n;
    while(n--){
    string s;
    string x;
    cin>>s>>x;

    char temp=s[0];
    s[0]=x[0];
    x[0]=temp;

    cout<<s<<" "<<x<<endl;
    }
}