#include<bits/stdc++.h>

using namespace std;

// Adjacency List
const int N = 1e5+10;
vector<int> g[N];

vector<vector<int>> cc;
vector<int> current_cc;


// visited vertex or node in the graph
bool vis[N];

void DFS(int vertex){
    vis[vertex] = true;
    current_cc.push_back(vertex);
    for(int child : g[vertex]){
        if(vis[child]) continue;
        DFS(child);
    }
}

int main()
{
    int v, e;
    cin>>v>>e;
    for(int i=0; i<e; i++){
        int v1, v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    // find number of connected component in the given graph
    int count = 0;
    for(int i=1; i<=v; i++){
        if(vis[i]) continue;
        current_cc.clear();
        DFS(i);
        cc.push_back(current_cc);
        count++;
    }

    cout<<"Number of connected component:\t"<<cc.size()<<"\n";
    for(vector<int> c_cc : cc){
        for(int vertex : c_cc){
            cout<<vertex<<" ";
        }
        cout<<"\n";
    }
}