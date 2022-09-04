//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        int N = n+1;
        int k = 1, r, count = 0;
        while(k<=N){
            r=k<<1;
            if(N >= r) 
                count += (N/r)*k;
            
            int mod = N%r;
            if((mod - (r/2))>0){
                count += (mod - (r/2));
            }
            
            k = k<<1;
        }
        return count;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends