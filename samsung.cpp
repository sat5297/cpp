#include<bits/stdc++.h>
using namespace std;

int bfs(vector<vector<char>>&v(n,vector<char>(m), int i, int j, vector < vector < bool >> &visited)
{
	visited[i][j] = true;
	queue < pair <int, int > > que;
	que.push(make_pair(i,j));
	
	while(!que.empty())
	{
		int u = que.front();
		que.pop();
		int k = u.first, l = u.second;
		if(v[k][l] == '0')
		{
			if(k-1 > 0)v[k-1][l] = '1';
			if(k-1 < n)v[k+1][l] = '1';
			if(l-1 > 0)v[k][l-1] = 
		}
	
	
	}

}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++)
	{
		int n,m;
		cin >> n >> m;
		vector < vector < char > > v(n, vector <char> (m));
		
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> v[i][j];
			}
		}
		
		int ctr = 0, extra = 0, f = 0;
		int turns = (n*m);
		
		for(int l = 0; l < turns; l++)
		{ 
			f = 0;
			extra = 0;
			for(int j = m-1; j >= 0; j--)
			{
				for(int i = n-1; i >= 0; i--)
				{
					if(v[i][j] == '0')
					{
						f = 1;
						if(i == 0)
						{
							if(v[i+1][j] == '1')
								v[i+1][j] = '0';
							if(v[i+1][j] == '2')
								{v[i+1][j] = '1';}
						}
						if(i > 0 && i < (n-1) && j > 0 && j < (m-1))
						{
							if(v[i-1][j] == '1')
								v[i-1][j] = '0';
							if(v[i-1][j] == '2')
								{v[i-1][j] = '1';}
							if(v[i+1][j] == '1')
								v[i+1][j] = '0';
							if(v[i+1][j] == '2')
								{v[i+1][j] = '1';}
						}
						if(i == (n-1))
						{
							if(v[i-1][j] == '1')
								v[i-1][j] = '0';
							if(v[i-1][j] == '2')
								{v[i-1][j] = '1';}
						}
						if(j == 0)
						{
							if(v[i][j+1] == '1')
								v[i][j+1] = '0';
							if(v[i][j+1] == '2')
								{v[i][j+1] = '1';}
						}
						if(j > 0 && j < (m-1))
						{
							if(v[i][j-1] == '1')
								{v[i][j-1] = '0';}
							if(v[i][j-1] == '2')
								{v[i][j-1] = '1';}
							if(v[i][j+1] == '1')
								{v[i][j+1] = '0';}
							if(v[i][j+1] == '2')
								{v[i][j+1] = '1';}
						}
						if(j == (m-1))
						{
							if(v[i][j-1] == '1')
								{v[i][j-1] = '0';}
							if(v[i][j-1] == '2')
								{v[i][j-1] = '1';}
						}
					}
					if(v[i][j] == '2' || v[i][j] == '1')
						extra += 1;
				}
			}
			if(extra==0)break;
			ctr += 1;
		}
		if(extra > 0)
			cout << -1 << endl;
		else
			cout << ctr << endl;
	}
	return 0;
}
