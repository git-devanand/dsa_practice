#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 && k==1)
            return 0;
        int len = 1<<(n-1);
        int mid = len/2;
        if(k<=mid)
            return kthGrammar(n-1, k);
        else
            return !kthGrammar(n-1, k-mid);
    }
};

int main()
{
    int n, k;
    cin>>n>>k;
    Solution ob;
    cout<<ob.kthGrammar(n,k)<<"\n";
}