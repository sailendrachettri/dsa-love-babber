#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

template <typename T>
class Graph
{
    public:
        unordered_map<T, list<T> > adj;

        void addEdge(T u, T v, bool direction)
        {
            // direction = 0 -> undirected graph
            // direction = 1 -> directed graph

            // create and edge fron u to v
            adj[u].push_back(v);

            if(direction == 0)
                adj[v].push_back(u);
        }

        void printAdjList()
        {
            for(auto i : adj)
            {
                cout << i.first << "-> ";
                for(auto j : i.second)
                {
                    cout << j << " ";

                } cout << endl;
            }
        }
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    int nodes; cin >> nodes;
    // cout << "Enter the number of nodes." << endl;

    int edges; cin >> edges;
    // cout << "Enter the number of edges." << endl;

    Graph<int> g;
    for(int i = 0; i < edges; i++)
    {
        int u, v; cin >> u >> v;
        // creating an undirected graph
        g.addEdge(u, v, 0);
    }

    g.printAdjList();


    

    return 0;
}