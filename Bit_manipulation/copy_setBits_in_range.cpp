//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        if(l<1 || r>32)
            return 0;
        // for(int i=l; i<=r; i++){
        //     int mask = 1<<(i-1);
        //     if(y&mask)
        //         x |= mask;
        // }
        while(l<=r){
            if(y&1<<(l-1))
                x |= y&1<<(l-1);
            l++;
        }
        
        return x;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends