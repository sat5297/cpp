#include<bits/stdc++.h>
using namespace std;

void generate(vector<string>&allStrings, string st, int n, int index, string curr)
{
    //cout << "here\n";
    if(index == n){
        allStrings.push_back(curr);
        return;
    }
    
    if(st[index] == '?'){
        generate(allStrings, st, n, index + 1, curr + '0');
        generate(allStrings, st, n, index + 1, curr + '1');
    }
    else
        generate(allStrings, st, n, index + 1, curr + st[index]);
}

bool checkPalindrome(string st){
    int low = 0, hi = st.size()-1;
    //cout << st << " " << endl;
    while(low <= hi){
        if(st[low] == st[hi]){
            low += 1;
            hi -= 1;
        }
        else
            return false;
    }
    return true;
}

bool checkALL(vector<string>&allStrings)
{
    int flag = 0;
    for(int i = 0; i < allStrings.size(); i++)
    {
        //cout << allStrings[i] << " " ;
        string curr = allStrings[i];
        for(int i = 5; i < curr.size(); i++){
            if(checkPalindrome(curr.substr(0,i)))
                return false;
        }
    }
    return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,z;
	cin >> t;
	for(int c = 1; c <= t; c++)
	{
	    int n;
	    cin >> n;
	    string st;
	    cin >> st;
	    
	    vector < string > allStrings;
	    int index = 0;
	    generate(allStrings, st, n, index, "");
	    bool check = checkALL(allStrings);
	    cout << "Case #" << c << ": ";
	    if(!check)
	        cout << "IMPOSSIBLE\n";
	    else
	        cout << "POSSIBLE\n";
	}
	return 0;
}
