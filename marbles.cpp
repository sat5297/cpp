#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        unsigned long long int n,k, val = 1;
        cin >> n >> k;
        
        if(n == k || k == 0)
            {cout << 1 << endl;continue;}
        
        for(int i = 1; i <= k ;i++)
        {
            val = val * (n / i);
            n -= 1;
            cout << val << " ";
        }
        cout << val << endl;
    }
    return 0;
}
