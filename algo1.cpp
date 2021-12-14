#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int n, flag = 0;
		cin >> n;
		
		vector < char > v(n);
		
		for(int i = 0; i < n; i++)
			cin >> v[i];
			
		vector < vector < char > > ans(n, vector < char > (n,'.'));
		
		for(int i = 0; i < n; i++)
		{
			if(v[i] == '1')
			{
				int f = 0;
				for(int j = 0; j < n; j++)
				{
					if(i == j)
						ans[i][j] = 'X';
					else
						{
							if(ans[i][j] == '+' || ans[i][j] == '-')
								flag = 1;
							if(ans[i][j] == '.')
							{
								if(v[j] == '1')
								{
									ans[i][j] = '=';
						    		ans[j][i] = '=';
								}
								else
									f = 1;
						    }
						}
				}
				if(f==1)flag = 1;
			}
			else
			{
				for(int j = 0; j < n; j++)
				{
					int f = 0;
					if(i == j)
						ans[i][j] = 'X';
					else
					{
						if(ans[i][j] == '+')
						{
							f = 1;
							break;
						}
						if(ans[i][j] == '.')
						{
							if(v[j] == '2')
							{
								f = 1;
								ans[i][j] = '+';
								ans[j][i] = '-';
								break;
							}
						}
					}
					if(f == 1)
						flag = 1;
				}
			}
			cout << endl;
			for(int i =0; i < n; i++)
			{
				for(int j = 0; j < n; j++)
					cout << ans[i][j] ;
				cout << endl;
			}
		}
		if(flag == 1)
			cout << "NO\n";
		else
		{
			cout << "YES\n";
			for(int i =0; i < n; i++)
			{
				for(int j = 0; j < n; j++)
					cout << ans[i][j] ;
				cout << endl;
			}
		}
	}
	return 0;
}
