#include<bits/stdc++.h>
using namespace std;

bool isValidMove(int x, int y, vector<vector<char>>grid, int n)
{
	if(x >= 1 && x <= n && y >= 1 && y <= n && (grid[x-1][y-1] == '-'))
		return true;
	else
		return false;
}

bool isWin(vector<vector<char>>grid, char ch, int x, int y, int n)
{
	//cout << "check win ";
	int r = 0, c = 0;
	while(r < n && (grid[r][y] == ch))
		r += 1;
	if(r == n)
		return true;
	r = 0;
	while(r < n && (grid[x][r] == ch))
		r += 1;
	if(r == n)
		return true;

	r = 0, c = 0;
	while((r < n && c < n) && (grid[r][c] == ch))
	{
		r += 1; c+= 1;
	}
	if( r == c && c == n)
		return true;
		
	r = 0, c = n-1;
	while((r < n && c >= 0) && (grid[r][c] == ch))
	{
		r += 1; c -= 1;
	}
	if( r == n && c < 0)
		return true;
		
	return false;
}

void printGrid(vector<vector<char>>grid)
{
	for(int i = 0; i < grid.size(); i++)
	{
		for(int j = 0; j < grid[0].size(); j++)
			cout << grid[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	int m;
	cout << "Enter number of players: ";
	cin >> m;
	vector < string > p(m);
	vector < char > chars(m);
	cout << "Enter the characters of each player and name:\n";
	for(int i = 0; i < m; i++)
	{
		cin >> chars[i];
		cin >> p[i];
	}
	
	string x;
	int y, n=3;
	cout << "Enter the grid size: ";
	cin >> n;
	vector < vector < char > > grid(n,vector < char> (n,'-'));
	int f = 0;
	printGrid(grid);
	while(true)
	{
		for(int i = 0; i < m; i++)
		{
			cin >> x;
			if(x == "exit")
			{
				cout << "Game Over\n";
				exit(0);
			}
			cin >> y;
			int pos_x = stoi(x);
			bool move = false, win = false;
			while(true)
			{
				move = isValidMove(pos_x,y,grid,n);
				if(move == false)
				{
					cout << ("Invalid Move\n");
					cin >> x;
					cin >> y;
					pos_x = stoi(x);
				}
				else
					break;
			}	
			grid[pos_x - 1][y - 1] = chars[i];
			if(move)
				printGrid(grid);
			win = isWin(grid, chars[i], pos_x-1, y-1, n);
			if(win)
			{
				cout << p[i] << " won the game\n";
				//exit(0);
			}
		}
	}
	return 0;
}
