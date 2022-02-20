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
        int x, chef = 0, carl = 0;
        cin >> x;
        string st;
        cin >> st;
        
        for(int i = 0; i < st.size(); i++)
        {
            //cout << st[i] << " ";
            if(st[i] == 'C')
                carl += 2;
            else if(st[i] == 'D')
                {carl += 1; chef += 1;}
            else if(st[i] == 'N')
                   chef += 2;
        }
        
        //cout << carl << " " << chef << endl;
        
        if(carl > chef)
            cout << 60*x << endl;
        else if(carl == chef)
            cout << 55*x << endl;
        else
            cout << 40*x << endl;
    }
    return 0;
}
