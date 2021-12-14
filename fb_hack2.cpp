#include<bits/stdc++.h>
namespace std{
template <> struct hash<std::pair<int, int>> {
    inline size_t operator()(const std::pair<int, int> &v) const {
        std::hash<int> int_hasher;
        return int_hasher(v.first) ^ int_hasher(v.second);
    }
};
}
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	
	for(int k = 1; k <= t; k++)
	{
		int n;
		cin >> n;
		vector < vector <char> > v;
		string x;
		for(int i = 0; i < n; i++)
		{
			cin >> x;
			vector < char > v1;
			for(int j = 0; j < x.size(); j++)
			{
				v1.push_back(x[j]);
			}
			v.push_back(v1);
		}
		/*
		cout << endl;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cout << v[i][j] << " ";
			}cout << endl;
		}
		cout << "\n\nhere\n";
		*/
		
		
		int row_min = INT_MAX;
		unordered_map < int , int > row;
		//cout << endl;
		for(int i = 0; i < n; i++)
		{
			int dot = 0, Xs = 0, Os = 0 ;
			for(int j = 0; j < n; j++)
			{
				//cout << v[i][j] << " ";
				if(v[i][j] == '.')
					dot += 1;
				else if(v[i][j] == 'X')
					Xs += 1;
				else
					Os += 1;
			}//cout << endl;
			if(Os == 0)
			{
				row_min = min(row_min, dot);
				row[i] = dot;
			}
		}
		
		int col_min = INT_MAX;
		unordered_map < int , int > col;
		
		for(int i = 0; i < n; i++)
		{	
			int dot = 0, Xs = 0, Os = 0 ;
			for(int j = 0; j < n; j++)
			{
				//cout << v[j][i] << " " ;
				if(v[j][i] == '.')
					dot += 1;
				else if(v[j][i] == 'X')
					Xs += 1;
				else
					Os += 1;
			}
			if(Os == 0)
			{
				col_min = min(col_min, dot);
				col[i] = dot;
			}
		}
		//cout << row_min << " " << col_min << endl;
		int ans = min(row_min, col_min);
		if(ans == INT_MAX)
			cout <<"Case #" << k << ": " << "Impossible" << endl;
		else
		{
			unordered_set < pair <int, int> > pair;
			for(auto it : row)
			{
				if(it.second == ans)
				{
					for(int j = 0; j < n; j++)
						pair.insert(make_pair(it.first, j));
				}
			}
			for(auto it : col)
			{
				if(it.second == ans)
				{
					for(int j = 0; j < n; j++)
						pair.insert(make_pair(it.first, j));
				}
			}
			int v = pair.size();
			cout << "Case #" << k << ": " << ans << " " << v << endl;
		}
	}
	return 0;
}
