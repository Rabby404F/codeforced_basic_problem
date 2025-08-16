    #include<iostream>
    #include<string>
    #include<cctype>
    #include<map>
    using namespace std;
     
    int main()
    {
        string s1;
        string s2;
        string s;
        cin>>s1>>s2>>s;
        map<char,char>m;
        for(int i=0;i<26;i++)
        {
            m[s1[i]]=s2[i];
        }
        for(int i=0;i<s.length();i++)
        {  if(isdigit(s[i]))
            {
                continue;
            }
            else if(isupper(s[i]))
            {   
                s[i]=tolower(s[i]);
                char ch;
                ch=toupper(m[s[i]]);
              s[i]=ch;
                
            }
            else{

            s[i]=m[s[i]];
            }
            
        }  
        
        cout<<s<<endl;
    }

