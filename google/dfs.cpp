#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void DFS(vector <int> adj[],int src,vector<int> &visited)
    {
        visited[src] = 1;
        cout << src << " ";
        for(int neigh : adj[src])
        {
            if(!visited[neigh])
                DFS(adj, neigh, visited);
        }
        cout << endl;
    }
    
    void DFS_util(vector < int > adj[], int nodes)
    {
        vector < int > visited(nodes,0);
        for(int i = 0; i < nodes; i++)
        {
            if(!visited[i])
                DFS(adj, i, visited);
        }
    }
    
};

int main()
{
    Solution st;
    int nodes, edges, a, b;
    cout << "Enter the nodes count:\n";
    cin >> nodes;
    vector < int > adj[nodes];
    
    cout << "Enter the edges count :\n";
    cin >> edges;
    cout << "Enter all the edges:\n";
    for(int i = 0; i < edges; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    st.DFS_util(adj, nodes);
    return 0;
}
