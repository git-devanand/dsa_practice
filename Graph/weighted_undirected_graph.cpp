#include<bits/stdc++.h>

using namespace std;

// Adjacency Matrix
const int N = 1e3+10;
int graph1[N][N];


// Adjacency List
vector<pair<int, int>> graph2[N];

int main()
{
    int v, e;
    cin>>v>>e;
    for(int i=0; i<e; i++){
        int v1, v2, wt;
        cin>>v1>>v2;
        graph1[v1][v2] = wt;
        graph1[v2][v1] = wt;

        graph2[v1].push_back({v2, wt});
        graph2[v2].push_back({v1, wt});


    }
}

// Adjacency Matrix 
// Space complexity : O(N*N) = O(N^2)

