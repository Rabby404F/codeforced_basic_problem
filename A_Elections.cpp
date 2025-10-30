    #include<iostream>
    using namespace std;
    int main()
    {   int t ;
        cin>>t;
        while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        int x=((max(b,c)-a)+1);
        int y=((max(c,a)-b)+1);
        int z=((max(b,a)-c)+1);
        if(x>0)cout<<x<<" ";
        else cout<<0<<" ";
        if(y>0)cout<<y<<" ";
        else cout<<0<<" ";
        if(z>0)cout<<z<<endl;
        else cout<<0<<endl;
    }
    }