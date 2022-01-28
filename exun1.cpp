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
	    long int n,a;
	    cin >> n >> a;
	    if((a > 1) && (a && (!(a&(a-1)))))
	        {cout << "Even\n";continue;}
	    else if(a&1)
	    {
	        if(n&1)
	            cout << "Odd\n";
	        else
	            cout << "Even\n";
	        continue;
	    }
	    else
	        cout << "Impossible\n";
	}
	return 0;
}
