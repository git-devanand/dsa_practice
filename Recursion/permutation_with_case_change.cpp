#include<bits/stdc++.h>
using namespace std;

void solve(string s,string ans){
    if(s.length()==0){
        cout<<ans<<"\n";
        return ;
    }

    string op1 = ans;
    string op2 = ans;
    op1.push_back(s[0]);
    op2.push_back(toupper(s[0]));
    s.erase(s.begin()+0);
    solve(s, op1);
    solve(s, op2);
}

int main()
{
    string s;
    cin>>s;
    string ans;
    solve(s, ans);
    cout<<"\n";
}