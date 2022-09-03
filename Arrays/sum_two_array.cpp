#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3] = {4,5,1};
    int b[3] = {3,4,5};
    string p="",q="";
    for (int i=0; i<3;i++){
        p += a[i];
        q += b[i];
    }
    int sum = stoi(p)+stoi(q);
    string  ans = to_string(sum);
    int req[1000];
    for (int i=0; i<sizeof(ans); i++){
        req[i] = to_string(ans[i]);
    }
    for (int i=0; i<sizeof(req); i++){
        cout<<req[i]<<" ";
    }
}