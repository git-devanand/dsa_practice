//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(N==0)
            return -1;
        int count = 0;
        int pos=0;
        while(N>0){
            if(N%2==1){
                count++;
                pos++;
            }
            else
                pos++;
            N /= 2;
        }
        return (count==1)?pos:-1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends