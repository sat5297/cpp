#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	
	for(int i = 1; i <= t; i++)
	{
		int n, ctr = 0;
		cin >> n;
		std::string s;
		cin >> s;
		//scanf("%s", s);
		char c = '.';
		
		for(int i = 0; i < n; i++)
		{
			if(s[i] == 'X' && c == '.')
			{
				ctr += 1;
				c = 'X';
			}
			else if(s[i] == 'O' && c == '.')
			{
				ctr += 1;
				c = 'O';
			}
			else if(s[i] == 'F' && c == '.')
			{
				ctr += 1;
				c = 'F';
			}
			else if(s[i] == 'X' && c == 'O')
			{
				ctr += 1;
				c = 'X';
			}
			else if(s[i] == 'O' && c == 'X')
			{
				ctr += 1;
				c = 'O';
			}
			else if(s[i] == 'X' && c == 'F')
			{
				c = 'X';
			}
			else if(s[i] == 'O' && c == 'F')
			{
				c = 'O';
			}
		}
		cout << "Case #" << i << ": " << ctr - 1 << endl;
	}
	return 0;
}
