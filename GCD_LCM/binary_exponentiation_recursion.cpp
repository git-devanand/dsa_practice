#include<bits/stdc++.h>
using namespace std;

int binExpRecur(int a, int b){
    if(b==0) return 1;
    long long res = binExpRecur(a, b/2);
    if(b&1) return a*res*res;
    else return res*res;
}

int binExpItr(int a, int b){
    int ans = 1;
    while(b){
        if(b*1){
            ans = ans * a;
        }
        a = a * a;
        b >>= 1;
    }
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<binExpRecur(a, b)<<"\n";
}