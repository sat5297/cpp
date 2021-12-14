#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int a,b;
		cin >> a >> b;
		
		int diff = abs(a-b);
		
		if(diff % 2 == 0)
			cout << diff/2 << endl;
		else
			cout << diff/2 + 2 << endl;	
	}
	return 0;
}
