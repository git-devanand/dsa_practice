#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        // Approach 1
        for(int i=0; i<n; i++){
            int p=0, q=n-1;
            while(p<q){
                swap(matrix[i][p], matrix[i][q]);
                p++;
                q--;
            }
        }        
        for(int i=0; i<n; i++){
            int j=0;
            while(j<n-i){
                swap(matrix[i][j], matrix[n-j-1][n-i-1]);
                j++;
            }
        }

        // Approach 2
        // int n = matrix.size();
        
        // for(int i=0; i<n; i++)
        //     for(int j=0; j<i; j++)
        //         swap(matrix[i][j], matrix[j][i]);
            
        // for(int i=0;i<n;i++)
        //     reverse(matrix[i].begin(),matrix[i].end());
    }
};

int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    Solution ob;
    ob.rotate(matrix);
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix.size(); j++)
            cout<<matrix[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n";
}