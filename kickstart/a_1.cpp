#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,z;
	cin >> t;
	for(int c = 1; c <= t; c++)
	{
	    string a,b;
	    cin >> a >> b;
	    int f = 0, dele = 0;
	    int i = 0, j = 0;
	    int n = a.size(), m = b.size();
	    
	    while(i < n && j < m){
	        //cout << a[i] << " " << b[j] << endl;
	        if(a[i] == b[j]){
	            i+=1;
	            j+=1;
	        }
	        else{
	            j += 1;
	            dele +=1;
	        }
	    }
	    
	    cout << "Case #" << c << ": " ;
	    
	    if(i == n && j != m){
	        dele += (m-j);
	        cout << dele << endl;
	    }
	    else if(i == n && j == m)
	        cout << dele << endl;
	    else
	        cout << "IMPOSSIBLE\n";
	}
	return 0;
}
