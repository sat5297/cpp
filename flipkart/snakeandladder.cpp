#include<bits/stdc++.h>
using namespace std;

int isSnake(int pos, vector < vector < int >> snakes)
{
	for(int i = 0; i < snakes.size(); i++)
	{
		if(snakes[i][0] == pos)
			pos = snakes[i][1]; 
	}
	return pos;
}

int isLadder(int pos, vector < vector < int >> ladder)
{
	for(int i = 0; i < ladder.size(); i++)
	{
		if(ladder[i][0] == pos)
			pos = ladder[i][1]; 
	}
	return pos;
}

int diceRoll()
{
	return std::rand()%6 + 1;
}

void startGame(vector < string > p, vector<vector<int>>ladder, vector<vector<int>>snakes, vector < int > v)
{
	while(true)
	{
		for(int i = 0; i < p.size(); i++)
		{
			int dice = diceRoll(), pos1 = v[i];
			int pos = v[i] + dice;
			if(pos > 100)
				continue;
			pos = isSnake(pos, snakes);
			pos = isLadder(pos,ladder);
			v[i] = pos;
			cout << p[i] << " rolled a " << dice << " and moved from " << pos1 << " to " << pos << endl;
			if(pos == 100)
			{
				cout << p[i] << " won the Game\n";
				exit(0);
			}
		}
	}
}

int main()
{
	int n, snk = 0, lad = 0, x, y;
	cout << "Enter the number of snakes:";
	cin >> snk;
	vector < vector < int > > snakes(snk, vector < int > (2,0));
	for(int i = 0; i < snk; i++)
	{
		cin >> x >> y;
		snakes[i][0] = x, snakes[i][1] = y;
	}
	cout << "Enter the number of ladders:";
	cin >> lad;
	vector < vector < int > > ladder(lad, vector < int> (2,0));
	for(int i = 0; i < lad; i++)
	{
		cin >> x >> y;
		ladder[i][0] = x, ladder[i][1] = y;
	}
	cout << "Enter the number of players: ";
	cin >> n;
	vector < string > p(n);
	vector < int >    v(n,0);
	for(int i = 0; i < n; i++)
		cin >> p[i];
	
	startGame(p, ladder, snakes, v);
	return 0;
}
