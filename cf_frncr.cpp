#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	int a,b,f=0;
	for(int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if(a < b)
			{f = 1;}
	}
	cout << (f ? "Happy Alex" : "Poor Alex");
	return 0;
}
