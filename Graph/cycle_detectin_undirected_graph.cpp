#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+10;
vector<int> g[N];
bool vis[N];

bool DFS(int vertex, int parent){
    vis[vertex] = true;
    bool isCycleExists = false;
    for(int child : g[vertex]){
        if(vis[child] && child == parent) continue;
        if(vis[child])
            return true;
        isCycleExists |= DFS(child, vertex);
    }

    return isCycleExists;
}

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    bool isCycleExists = false;
    for(int i=0; i<=n; i++){
        if(vis[i]) continue;
        if(DFS(i, 0))
            isCycleExists = true;
            break;
    }
    cout<<isCycleExists<<"\n";


}