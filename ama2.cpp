#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, int n, int m)
{
    if(x >= 0 && x < n && y >= 0 && y < m)
        return true;
    else
        return false;
}

void bfs(vector<vector<char>>&grid, vector<vector<bool>>&visited,int x, int y)
{
    visited[x][y] = true;
    int n = grid.size(), m = grid[0].size();
    queue <pair < int,int > > queue;
    queue.push(make_pair(x,y));
    
    while(!queue.empty())
    {
        pair <int,int> u = queue.front();
        queue.pop();
        int x1 = u.first, y1 = u.second;
        
        if(isSafe(x1-1,y1,n,m) && (grid[x1-1][y1] == 'X'))
        {
            visited[x1-1][y1] = true;
            queue.push(make_pair(x1-1,y1));
        }
        
        if(isSafe(x1,y1-1,n,m) && (grid[x1][y1-1] == 'X'))
        {
            visited[x1][y1-1] = true;
            queue.push(make_pair(x1,y1-1));
        }
        
        if(isSafe(x1+1,y1,n,m) && (grid[x1+1][y1] == 'X'))
        {
            visited[x1+1][y1] = true;
            queue.push(make_pair(x1+1,y1));
        }
        
        if(isSafe(x1,y1+1,n,m) && (grid[x1][y1+1] == 'X'))
        {
            visited[x1][y1+1] = true;
            queue.push(make_pair(x1,y1+1));
        }
    }
}


int xShape(vector<vector<char>>& grid) 
{
    int n = grid.size(), m = grid[0].size(), ctr = 0;
    
    vector < vector < bool > > visited(n,vector<bool>(m,false));
    cout << "start";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(!visited[i][j] && grid[i][j] == 'X')
            {
                ctr += 1;
                bfs(grid,visited, i,j);
            }
        }
    }
    return ctr;
}

int main()
{
	int n = 3, m = 3;
	cout << n << " " << m << endl;
	vector < vector < char > > grid(n, vector < char > (m));
	cout << "yup";
	grid[0][0] = 'X';
	grid[0][1] = 'O';
	grid[0][2] = 'X';
	
	grid[1][0] = 'O';
	grid[1][1] = 'X';
	grid[1][2] = 'O';
	
	grid[2][0] = 'X';
	grid[2][1] = 'X';
	grid[2][2] = 'X';
	
	cout << "done";
	int g = xShape(grid);
	cout << g << endl;
	return 0;
}
