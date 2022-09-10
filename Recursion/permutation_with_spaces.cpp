//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    void permutation(string S, string op){
        // Code Here
        if(S.length() == 0){
           cout<<op<<" ";
           return ; 
        }
        
        string op1 = op;
        string op2 = op;
        op1.push_back(' ');
        op1.push_back(S[0]);
        op2.push_back(S[0]);
        S.erase(S.begin()+0);
        permutation(S, op1);
        permutation(S, op2);
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        string op;
        op.push_back(S[0]);
        S.erase(S.begin()+0);
        Solution obj;
        obj.permutation(S, op);
        cout<<"\n";
    }
}

// } Driver Code Ends