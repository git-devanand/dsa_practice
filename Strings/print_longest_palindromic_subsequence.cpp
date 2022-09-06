//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        string revs;
        int n = s.length();
        for(int i=0; i<n; i++)
            revs.push_back(s[n-i-1]);
        
        int dp[n+1][n+1];
        for(int i=0; i<n+1; i++){
            for(int j=0; j<n+1; j++){
                if(i==0 || j==0)
                    dp[i][j] = 0;
            }
        }
        
        
        for(int i=1; i<n+1; i++){
            for(int j=1; j<n+1; j++){
                if(s[i-1]==revs[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
        
        string palindrome;
        int i=n, j=n;
        while(i>0 && j>0){
            if(s[i-1]==revs[j-1]){
                palindrome.push_back(s[i-1]);
                i--;
                j--;
            }
            else{
                if(dp[i][j-1] >= dp[i-1][j])
                    j--;
                else
                    i--;
            }
        }
        
        return palindrome;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}

// } Driver Code Ends