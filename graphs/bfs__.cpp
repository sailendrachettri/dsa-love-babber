#include <unordered_map>
#include <set>
#include <list>
#include <queue>

void prepareAdjList(unordered_map<int, set<int> > &adjList, vector<pair<int, int>> &edges)
{
    int size = edges.size();
    for(int i = 0; i < size; i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        
        adjList[u].insert(v);
        adjList[v].insert(u);
    }   
}

void bfs(unordered_map<int, set<int> > &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;
    
    while(!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        
        // store front node to answer
        ans.push_back(frontNode);
        
        // traverse all neighbour of front node
        for(auto i : adjList[frontNode])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, set<int> > adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;
    
    prepareAdjList(adjList, edges);
        
    // traverse all components of a graph
    for(int i = 0; i < vertex; i++)
    {
        if(!visited[i])
        {
            bfs(adjList, visited, ans, i);
        }
    }
    
    return ans;   
}












