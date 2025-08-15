#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<string,int>m;
    m["Tetrahedron"]=4;
    m["Cube"]=6;
    m["Octahedron"]=8;
    m["Dodecahedron"]=12;
    m["Icosahedron"]=20;

    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        sum+=m[s];
    }
    cout<<sum<<endl;

}