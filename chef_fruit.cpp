#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a,b;
        unordered_set < int > x,y;
        
        for(int i = 0; i < n; i++)
        {
            cin >> a >> b;
            x.insert(a);
            y.insert(b);
        }
        cout << x.size()  + y.size() << endl;
    }
    return 0;
}
