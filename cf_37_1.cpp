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
	    int n,z,ones = 0, zeros = 0;
	    cin >> n;
	    for(int i = 0; i < n; i++){
	        cin >> z;
	        if(z&1)
	            ones += 1;
	        else
	            zeros += 1;
	    }
	    
	    if(n&1){
	        if(ones > zeros){
	            cout << 1;
	        }else{
	            cout << 0;
	        }
	    }
	    else{
	        if(ones >= zeros){
	            cout << 1;
	        }else{
	            cout << 0;
	        }
	    }
	    cout << endl;
	}
	return 0;
}
