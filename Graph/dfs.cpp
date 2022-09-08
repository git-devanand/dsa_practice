#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;  // N<=10^5

//Adjacency List
vector<int> g[N];

// visited list
bool vis[N];

// DEPTH FIRST SEARCH (DFS)
void DFS(int vertex){
    /** Take action on vertex after
    * entering the vertex
    **/
   cout<<"Node "<<vertex<<"\n";
   vis[vertex] = true;
    for(int child : g[vertex]){
        /** Take action on child before
         * entering child node
         **/
        cout<<"parent "<<vertex<<" -> child "<<child<<"\n";
        if(vis[child]) continue;
         
        DFS(child);
        /** Take action on child after
         * exiting the child node
         **/
    }
    /** Take action on vertex before
     * exiting the vertex
     **/
}


int main()
{
    int n, m;   // n -> #vertices m -> #edges
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int v1, v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    DFS(1);
}


// #vertex  #edges
// 6          9
// 1   3
// 1   5
// 3   5
// 3   4
// 3   6
// 3   2
// 2   6
// 4   6
// 5   6
