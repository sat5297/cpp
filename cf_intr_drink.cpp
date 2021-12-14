#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vector < int > v(n,0);
	
	for(int i = 0; i < n; i++)
		cin >> v[i];
	
	sort(v.begin(),v.end());
	
	int t, z;
	cin >> t;
	
	for(int i = 0; i < t; i++)
	{
		cin >> z;
		auto it = upper_bound(v.begin(),v.end(),z);
		cout << (it - v.begin()) << endl;	
	}
	return 0;
}
