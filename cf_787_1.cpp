#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,z;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
	    int n;
	    cin >> n;
	    
	    vector < long long int > v(n,0);
	    
	    for(int i = 0; i < n; i++)
	        cin >> v[i];
	    
	    reverse(v.begin(),v.end());
	    if(n == 1)
	        cout << 0 << endl;
	    else
	    {
	        for(int i = n-2; i >= 0; i--)
	        {
	        
	        
	        
	        }
	    }
	}
	return 0;
}
