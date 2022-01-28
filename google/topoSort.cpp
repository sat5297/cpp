#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void TopoSort(vector<int>adj[],int nodes)
    {
        vector < int > indegree(nodes,0);
        int nodesCovered= 0;
        for(int i = 0; i < nodes; i++)
        {
            for(int neigh : adj[i])
                indegree[neigh] += 1;
        }
        
        queue < int > q;
        
        for(int i = 0; i < nodes; i++)
        {
            if(indegree[i] == 0){
                q.push(i);
                nodesCovered += 1;
            }
        }
        
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            cout << front << " ";
            for(int neigh : adj[front])
            {
                indegree[neigh] -= 1;
                if(indegree[neigh] == 0)
                {
                    nodesCovered += 1;
                    q.push(neigh);
                }
            }
        }
        cout << "Total nodes covered : " << nodesCovered;
    }
};

int main()
{
    Solution st;
    cout << "TopoSort works for DAG\n";
    int nodes, edges, a, b, src;
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
    }
    st.TopoSort(adj, nodes);
    return 0;
}
