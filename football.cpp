#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int z_count = 0;
    int z_max = 0;
    int o_count = 0;
    int o_max = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            z_count++;
            if (z_count > z_max)
            {
                z_max = z_count;
            }
            o_count=0;
        }
        else if (s[i] == '1')
        {
            o_count++;
            if (o_count > o_max)
            {
                o_max = o_count;
            }
            z_count=0;
        }
    }

    
    if(z_max>=7 || o_max>=7){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;} 
}
