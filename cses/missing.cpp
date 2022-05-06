#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n, sum = 0, need = 0, z;
    cin >> n;
    
    for(int i = 1; i < n; i++){
        cin >> z;
        sum += z;
    }
    
    need = (n * (n+1))/2;
    
    cout << need - sum << endl;
    return 0;
}
