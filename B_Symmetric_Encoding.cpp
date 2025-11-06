#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){

    int n;
    cin >> n;
    string s;
    cin >> s;

    string s1 = s;
    sort(s1.begin(), s1.end());
    int r=unique( s1.begin(),s1.end())-s1.begin();
    s1.erase(s1.begin()+r,s1.end());

    map<char, char> m;
    for (int i = 0; i < (s1.size() / 2); i++) {
        m[s1[i]] = s1[s1.size() - 1 - i];
        m[s1[s1.size() - 1 - i]] = s1[i];
    }
    if(s1.size()%2!=0){
    
        m[s1[(s1.size()/2)]]=s1[(s1.size()/2)];
    }
    
    

    for (char c : s) cout << m[c];
    cout << '\n';
}
    

    return 0;
}
