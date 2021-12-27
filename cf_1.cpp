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
	    int a,b,c;
	    cin >> a >> b >> c;
	    if((a + b == c) || (a + c == b) || (b + c == a))
	        cout << "YES\n";
	    else if((a % 2 == 0)&&(b == c))
	        cout << "YES\n";
	    else if((b % 2 == 0) && (a == c))
	        cout << "YES\n";
	    else if((c % 2 == 0) && (a == b))
	        cout << "YES\n";
	    else
	        cout << "NO\n";   
	}
	return 0;
}
