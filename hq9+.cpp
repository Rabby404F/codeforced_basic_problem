#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int h_count=0;
    int q_count=0;
    int nine_count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='H'){h_count++;}
        else if(s[i]=='Q'){q_count++;}
        else if(s[i]=='9'){nine_count++;}
    }
    if(h_count!=0 ||q_count!=0||nine_count!=0)cout<<"YES"<<endl;
    else{cout<<"NO"<<endl;}
}