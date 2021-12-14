#include<bits/stdc++.h>
using namespace std;

vector <string> ans;
    
bool checkBalance(string val)
{
    stack<char> st;
    int f = 0;
    //cout << val << " ";
    for(int i = 0; i < val.size(); i++)
    {
    	//cout << val[i] << " " ;
        if(val[i] == '(')
            st.push('(');
        else if((val[i] == ')') && (!st.empty()) && (st.top() == '('))
            st.pop();
        else
            f = 1;
        //if(!st.empty())
        	//cout << "top-"<<st.top() << st.size() << " " << f  << " \n";
    }
    //cout << " " << " " << st.empty() << " " << f << " \n" ;
    if(st.empty() && f == 0)
        return true;
    return false;
}

void generate(string &res, int n)
{
    if(res.size() == n)
    {	
    	bool bal = checkBalance(res);
        if(bal)
        {
        	ans.push_back(res);
        	//cout << bal << " "<< res << endl;
        }
        return;
    }
    res.push_back('(');
    generate(res,n);
    res.pop_back();
    res.push_back(')');
    generate(res,n);
    res.pop_back();
}

vector<string> AllParenthesis(int n) 
{
    string val;
    generate(val,2*n);
    return ans;
}

int main()
{
	int n;
	cin >> n;
	vector <string>res=AllParenthesis(n);
	string val;
	//cin >> val;
	//bool ans = checkBalance(val);
	//cout << ans << endl;
	//cout << "here ans: \n";
	for(auto it : res)
		cout << it << endl;
	return 0;
}

