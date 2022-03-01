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
        long long sum1 = 0, sum2 = 0, ans1 = INT_MAX, ans2 = INT_MAX;
        cin >> n;
        vector < int > v(n,0);

        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum1 += v[i];
        }
        
        for(int i = 0; i < n; i++){
            sum2 += v[i];
            sum1 -= v[i];
            ans1 = max(sum1,sum2);
            if(sum2 >= sum1)
                break;
            ans2 = max(sum1,sum2);
        }
        //cout << ans1 << " " << ans2 << endl;
        cout << min(ans1,ans2) << endl;
    }
    return 0;
}
