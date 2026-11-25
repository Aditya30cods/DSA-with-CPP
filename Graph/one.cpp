#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph
{
    int V; // No. of vertices
    list<int> *adj; // Pointer to an array containing adjacency lists

    public:
    Graph(int V){
        this->V=V;
        adj = new list<int>[V];
    }
    void addEdge(int u,int v){
        adj[u].push_back(v); // Add v to u’s list.
        adj[v].push_back(u); // Add u to v’s list.
    }

    void printGraph() {
        for (int v = 0; v < V; v++)
        {
            cout << "\n Adjacency list of vertex " << v << "\n head ";
            for (auto x : adj[v])
               cout << "-> " << x;
            printf("\n");
        }
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printGraph();
    return 0;
}