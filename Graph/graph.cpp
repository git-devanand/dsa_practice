#include<bits/stdc++.h>

using namespace std;

// Adjacency Matrix
const int N = 1e3+10;
int graph1[N][N];


// Adjacency List
vector<int> graph2[N];

int main()
{
    int v, e;
    cin>>v>>e;
    for(int i=0; i<e; i++){
        int v1, v2;
        cin>>v1>>v2;
        graph1[v1][v2] = 1;
        graph1[v2][v1] = 1;

        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);


    }
}

// Adjacency Matrix 
// Space complexity : O(N*N) = O(N^2)


// Adjacency List
// Space complexity : O(V+E)


