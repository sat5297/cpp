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
        vector<long long int>v(n,0);
        long long int mini = INT_MAX, maxi = INT_MIN;
        int max_index = 0, min_index=0, z;
        long long int sum=0;
        
        for(int i = 0; i < n; i++)
        {
            cin >> z;
            v[i] = abs(z);
            if((i % 2 == 0)&&(v[i] < mini)) {
                mini = v[i];
                min_index = i;
            }
            else if((i%2)&&(v[i] > maxi)){
                maxi = v[i];
                max_index = i;
            }
        }
        for(int i = 0; i < n; i++){
            if(i == max_index)
                sum += v[max_index];
            else if(i == min_index)
                sum -= v[min_index];
            else if(i%2==0)
                sum += v[i];
            else
                sum -= v[i];
        }
        cout << sum << endl;
    }
    return 0;
}
