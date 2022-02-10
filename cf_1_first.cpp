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
        int rem = n % 7;
        if(rem == 0)
        {cout << n << endl;continue;}
        
        int v1 = n - rem, v2 = n + (7 - rem);
        int a1 = v1, a2 = v2;
        int n1 = n;
        int c1 = 0, c2 = 0;
        while(n != 0)
        {
            int r1 = n % 10, r2 = v1 % 10;
            if(r1 == r2)c1 += 1;
            n /= 10;
            v1 /= 10;
        }
        
        while(n1 != 0)
        {
            int r1 = n1 % 10, r2 = v2 % 10;
            if(r1 == r2)c2 += 1;
            n1 /= 10;
            v2 /= 10;
        }
        if(c1 <= c2)
            cout << a1 << endl;
        else
            cout << a2 << endl;
    }
    return 0;
}
