#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n, z;
        cin >> n;
        unordered_map < int, int > mp;
        
        for(int i = 0; i < 2*n; i++)
        {
            cin >> z;
            mp[z] += 1;
        }
    
        bool poss = true;
        for(int i = 0; i <= n; i++)
        {
            if(mp.find(i) == mp.end())
                break;
            if(mp[i] < 2)
                poss = false;
        }
        cout <<  (poss ? "YES\n" : "NO\n") ;
    } 
    return 0;
}
