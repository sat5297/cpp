#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void BFS(vector <int> adj[],int src,vector<int> &visited)
    {
        visited[src] = 1;
        queue < int > q;
        q.push(src);
        
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            cout << front << endl;
            for(int neigh : adj[front])
            {
                if(!visited[neigh])
                {
                    cout << neigh << endl;
                    visited[neigh] = 1;
                    q.push(neigh);
                }
            } 
        }
    }
    
    void BFS_util(vector < int > adj[], int nodes)
    {
        vector < int > visited(nodes,0);
        for(int i = 0; i < nodes; i++)
        {
            if(!visited[i])
                BFS(adj, i, visited);
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
    st.BFS_util(adj, nodes);
    return 0;
}
