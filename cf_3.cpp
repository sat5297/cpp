#include<bits/stdc++.h>
using namespace std;

int func(int hc,int dc,int hm, int dm)
{
    cout << hc << " " << dc << " "<<hm << " " << dm << endl; 
    int d1 = (hc/dm), d2 = (hm/dc);
    cout << d1 << " " << d2 << endl;  
    int mini = min(d1,d2) + 1;
    cout << mini << " ";
    hc = hc - mini*dm;
    hm = hm - mini*dc;
    cout << hc << " " << hm << endl;
    if( hc > 0 && hm <= 0)
        return 1;
    if(hc < 0 && hm < 0)
        return 1;
    return 0;
} 

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int hc,dc,hm,dm,k,w,a;
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;
        
        int hc1 = k*a + hc, dc1 = k*w + dc;
        
        int f1 = func(hc1,dc,hm,dm);
        int f2 = func(hc,dc1,hm,dm);
        
        cout << " " << f1 << " " << f2 << endl;
        if(f1 || f2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
