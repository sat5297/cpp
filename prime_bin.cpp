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
        string st;
        cin >> st;
        int n = st.size(), f = 0;
        if(n == 1)
        {
            cout << "No\n";
            continue;
        }
        for(int i = 1;i < n; i++)
        {
            if(st[i] == '0' && st[i-1] == '1')
                {f = 1; break;}
            else if(st[i] == '1' && st[i-1] == '1')
                {f = 1; break;}
        }
        if(f)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
