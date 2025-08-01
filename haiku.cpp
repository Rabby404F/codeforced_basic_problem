#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
     
   int count_a=0;
   int count_b=0;
   int count_c=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {count_a++;}
    }
    for(int i=0;i<b.length();i++)
    {
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
        {count_b++;}
    }
    for(int i=0;i<c.length();i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
        {count_c++;}
    }
    if(count_a==5 && count_b==7&& count_c==5)cout<<"YES"<<endl;
    else{cout<<"NO"<<endl;}

    return 0;
}