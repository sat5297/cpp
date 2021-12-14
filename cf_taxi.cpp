#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,z;
	cin >> n;
	
	vector < int > v(4,0);
	
	for(int i = 0; i < n; i++)
	{
		cin >> z;
		v[z-1] += 1;
	}
	
	int ctr = v[3];
	
	int mini = min(v[2],v[0]);
	ctr += mini;
	
	v[2] -= mini;
	v[0] -= mini;
	
	mini = v[1]/2;
	ctr += mini;
	v[1] = v[1] - 2*mini;
	
	
	
	
	
	
	return 0;
}
