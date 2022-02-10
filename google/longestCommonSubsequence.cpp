#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int LCS(int n, int m, string s1, string s2)
    {
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));   
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= m; j++)
            {
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                
                else if(s1[i-1] == s2[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                
                else
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[n][m];
    }
};

int main()
{
    Solution st;
    int n,m;
    cout << "Enter the length of both the strings: ";
    cin >> n >> m;
    cout << "Enter both the strings: ";
    string s1,s2;
    cin >> s1;
    cin >> s2;
    cout << st.LCS(n,m,s1,s2) << endl;
    return 0;
}
