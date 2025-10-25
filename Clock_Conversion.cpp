#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    cin>>x;
    vector<string>v(x);
    for(auto &x:v)
    {
        cin>>x;
    }
    for(int i=0;i<x;i++)
    {    int r2;
        int r=stoi(v[i]);
       
        reverse(v[i].begin(),v[i].end());
        int f=stoi(v[i]);
       
        int min=f%10;
        f=f/10;
        int min2=f%10;
        f=(min*10)+min2;
        if(r>=13)
        {
            r2=r%12;
        }
         if(r==0)
        {
             cout<<setw(2)<<setfill('0')<<"12"<<":"<<setw(2)<<setfill('0')<<f<<" AM"<<endl;;
        }
        else if(r<13)
        { 
            cout<<setw(2)<<setfill('0')<<r<<":"<<setw(2)<<setfill('0')<<f;
            if(r<12){
                cout<<" AM"<<endl;
            }else cout<<" PM"<<endl;
        }
        
        else cout<<setw(2)<<setfill('0')<<r2<<":"<<setw(2)<<setfill('0')<<f<<" PM"<<endl;

    }

}