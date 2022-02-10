#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string s1;
        cin >> s1;
        int c1 = 0, c2 = 0;
        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i] == '0')
                c1 += 1;
            else
                c2 += 1;
        }
        if(c1 != c2)
            {cout << min(c1,c2)<<endl;continue;}
        if(s1[0] == '0')
            c1 -= 1;
        else
            c2 -= 1;
        cout << min(c1,c2) << endl;
    }
    return 0;
}
