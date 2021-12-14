#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int n;
		long long int x;
		
		cin >> n;
		cin >> x;
		vector <long long int> v(n,0);
		
		unordered_map < long long int, long long int > mp;
		
		for(int i = 0; i < n; i++)
			cin >> v[i];
		
		for(int i = 0; i < n; i++)
		{
			mp[v[i]] += 1;
			mp[v[i] ^ x] += 1;
		}
		int ans = INT_MIN;
		for(auto it : mp)
		{
			if(it.second > ans)
			{
				ans = max(ans, it.second);
			}
		}
		
	}
	return 0;
}
