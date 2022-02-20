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
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        string res = "";
        
        for(int i = 0; i < n; i++)
        {
            res += a[i];
            res += b[n-1-i];
        }
        cout << res << endl;
    }
    return 0;
}
