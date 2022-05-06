#include<bits/stdc++.h>
#include<time.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of nodes in the graph:";
    cin >> n;
    
    cout << "Generating Random Adjacency Matrix\n";
    srand(time(NULL));
    int matrix[n][n];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
                matrix[i][j] = 0;
            else 
                matrix[i][j] = rand() % 2;
        }
    }
    
    cout << "Diplaying the adjacency Matrix:\n\n";
    
    cout << "  " ;
    for(int i = 0; i < n; i++)
        cout << i << " ";
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout << i << " " ;
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] <<  " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    
    vector < int > adj[n];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == 1)
                adj[i].push_back(j);
        }
    }
    
    cout << "Adjacency List\n";
    for(int i = 0; i < n; i++)
    {
        cout << "node " <<  i << " --> ";
        for(int j = 0; j < adj[i].size(); j++)
        {
                cout << adj[i][j] << " " ;
        }
        cout << endl;
    }
    
    cout << endl;
    return 0;
}
