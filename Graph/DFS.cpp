#include<iostream>
#include<vector>
#include<list>
using namespace std;

void DFS(int V,vector<int> adj[],vector<bool> &visited){
    if(visited[V]== true) return;

    visited[V] = true;
  cout<< V << " ";
    for(auto i: adj[V]){
        if(!visited[i]){
            DFS(i,adj,visited);
        }
    }
}
  int main() {
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(V, false);

    DFS(0, adj, visited);

    return 0;
}