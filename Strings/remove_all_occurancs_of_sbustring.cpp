#include<bits/stdc++.h>

using namespace std;

string removeOccurances(string S, string part){
    while(S.length()!=0 && S.find(part) < S.length()){
        S.erase(S.find(part), part.length());
    }

    return S;
}

int main()
{
    string S = "daabcbaabcbc";
    string part = "abc";

    cout<<removeOccurances(S, part)<<"\n";
}