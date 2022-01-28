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
	    int a, b, c;
	    cin >> a >> b >> c;
	    int d1 = b-a;
	    int d2 = c-b;
	    int d3 = c-a;
	    
	    if(d1 == d2 && a != c)
	        cout << "YES\n";
	    else
	    {
	        if(((b - d2) % a == 0)&&((b+d1) % c == 0))
	            cout << "YES\n";
	        
	        else if(((a + (d3/2))%b == 0) && ((c - d3/2)%b == 0))
	            cout << "YES\n";
	        
	        else if(((b+d1)%c == 0) && ((b-d2)%a ==0))
	            cout << "YES\n";
	        else
	            cout << "NO\n";
	    }
	}
	return 0;
}
