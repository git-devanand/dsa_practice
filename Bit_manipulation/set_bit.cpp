//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // for(int i=0; i<32; i++){
        //     if(N&(1<<i))
        //         count++;
        // }
        if(N<=0)
            return 0;
        if(N%2==1)
            return 1+setBits(N/2);
        return setBits(N/2);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends