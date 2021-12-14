#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin >> n;
	vector <int> v1(n,0);
	for(int i = 0; i < n; i++)
		cin >> v1[i];
	
	cin >> m;
	vector <int> v2(m,0);
	for(int j = 0; j < m; j++)
		cin >> v2[j];

	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	
	int i = 0, j = 0, k = 0;
	
	while(i < n && j < m)
	{
		if(abs(v1[i]-v2[j]) <= 1)
		{
			k += 1; i += 1; j += 1;
		}
		else if(v1[i] > v2[j])j ++;
		else				  i ++;
	}
	
	cout << k << endl;
	return 0;
}
