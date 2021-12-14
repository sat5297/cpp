#include<bits/stdc++.h>
using namespace std;

int randomNumber()
{
	srand(time(0));
	return rand();
}

bool checkVacancy(vector<vector<int>>&grid)
{
	int f = 0;
	for(int i = 0; i < grid.size(); i++)
	{
		for(int j = 0;j < grid[0].size(); j++)
		{
			if(grid[i][j] == 0)
				f = 1;
		}
	}
	return (f == 1);
}

void initializeGrid(vector<vector<int>>&grid)
{
	cout << "Intializing\n";
	int n = grid.size(), ctr = 0;
	while(ctr != 2)
	{
		int ran1 = randomNumber()%n, ran2 = randomNumber()%n;
		//cout << ran1 << " "<< ran2 << endl;
		if(grid[ran1][ran2] != 2)
		{
			grid[ran1][ran2] = 2;
			ctr += 1;
		}
	}
}

void generateGrid(vector<vector<int>>&grid)
{
	cout << "Generating \n";
	int ran1 = 0, ran2 = 0;
	do
	{
		int n = grid.size();
		ran1 = randomNumber()%n, ran2 = randomNumber()%n;
		if(grid[ran1][ran2] == 0)
			break;
	}while(true);
	grid[ran1][ran2] = pow(2,ran1+1);	
}

void printGrid(vector < vector < int > > &grid)
{
	//cout << "Print Grid\n";
	for(int i = 0; i < grid.size(); i++)
	{
		for(int j = 0;j < grid[0].size(); j++)
		{
			if(grid[i][j] == 0)
				cout << "-" << "\t";
			else
				cout << grid[i][j] << "\t";
		}
		cout << endl;
	}
	//cout << "Exiting Printer\n";
}

void checkTouchLeft(vector<vector<int>>&grid)
{
	//cout << "Checking Touch on Left\n";
	int n = grid.size(), m = grid[0].size();
	
	for(int i = 0; i < n; i++)
	{
		for(int j = m-1; j >= 1; j--)
		{
			if(grid[i][j] == grid[i][j-1] && (grid[i][j] != 0))
			{
				grid[i][j-1] = 2*grid[i][j];
				grid[i][j] = 0;
			}
		}
	}
	//cout << "complete Touch on Left\n";
}

void checkTouchRight(vector<vector<int>>&grid)
{
	//cout << "Checking Touch on Right\n";
	int n = grid.size(), m = grid[0].size();
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 1; j < m; j++)
		{
			if(grid[i][j] == grid[i][j-1] && (grid[i][j] != 0))
			{
				grid[i][j] = 2*grid[i][j-1];
				grid[i][j-1] = 0;
			}
		}
	}
	//cout << "complete Touch on Right\n";
}

void checkTouchTop(vector<vector<int>>&grid)
{
	//cout << "Checking Touch on Top\n";
	int n = grid.size(), m = grid[0].size();
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 1; j < m; j++)
		{
			if((grid[j][i] == grid[j-1][i]) && (grid[j][i] != 0))
			{
				//cout << "we got top " << i << " "<< j << endl;
				grid[j-1][i] = 2*grid[j][i];
				grid[j][i] = 0;
			}
		}
	}
	//cout << "complete Touch on Top\n";
}

void checkTouchDown(vector<vector<int>>&grid)
{
	//cout << "Checking Touch on Down\n";
	int n = grid.size(), m = grid[0].size();
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m-1 ; j++)
		{
			if((grid[j][i] == grid[j+1][i]) && (grid[j][i] != 0))
			{
				//cout << "we got down " << i << " "<< j << endl;
				grid[j+1][i] = 2*grid[j][i];
				grid[j][i] = 0;
			}
		}
	}
	//cout << "complete Touch on Down\n";
}

bool checkWin(vector<vector<int>>&grid)
{
	//cout << "Checking Win\n";
	for(int i = 0; i < grid.size(); i++)
	{
		for(int j = 0; j < grid[0].size(); j++)
		{
			if(grid[i][j] == 128)
				return true;
		}
	}
	return false;
}

int main()
{
	string start = "reset";
	do
	{
		int n,ch;
		cout << "Enter the grid size: ";
		cin >> n;
		vector < vector < int > > grid(n, vector < int > (n,0));
		initializeGrid(grid);
		printGrid(grid);
		do
		{	
			cout << "Enter drxn: ";
			cin >> ch;
			cout << endl;
			if(ch == 0)
				checkTouchLeft(grid);
			else if(ch == 1)
				checkTouchRight(grid);
			else if(ch == 2)
				checkTouchTop(grid);
			else if(ch == 3)
				checkTouchDown(grid);
			else
				cout << "Invalid Move\n";
				
			bool win = checkWin(grid);
			if(checkVacancy(grid) == false)
				{cout << "Game Over\n";break;}
			generateGrid(grid);
			printGrid(grid);
			if(win)
			{cout<<"Congratulations.\n";break;}
		}while(true);
		cout << "Enter exit or restart\n";
		cin >> start;
	}while(start != "exit");
	return 0;
}



