#include<bits/stdc++.h>
using namespace std;

int find(string num)
{
    int sum = 0, i = 0;
    while(num[i] != '\0'){
        int r = (num[i]-'0') % 10;
        sum += r;
        sum = sum%9;
        i += 1;
    }
    int rem = sum%9;
    if(rem == 0)
        return 0;
    return (9 - rem);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,z;
	cin >> t;
	for(int c = 1; c <= t; c++)
	{
	    string a;
	    cin >> a;
	    int val = find(a);
	    int position = a.size();
	    if(val == 0)
	    {
	        position = 1;
	    }
	    else
	    {
	        for(int i = a.size()-1; i>=0; i--){
	            if((a[i]-'0')>val)
	                position = i;
	        }
	    }
	    a.insert(a.begin() + position, val + '0');
	    
	    cout << "Case #" << c << ": " << a << endl;
	}
	return 0;
}
