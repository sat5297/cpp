#include<bits/stdc++.h>
using namespace std;

string findLargest(vector<string>&st){
    string res = "";
    int n = st.size(), index = 0, f = 0;
    if(n == 0)
        return "";
    
    while(true){
        for(int i = 1; i < n; i++){
            if(st[i][index] != st[i-1][index])
                f = 1;
        }
        if(f)
            break;
        res += st[0][index];
        index += 1;
    }
    return res;    
}


int main()
{
    int n;
    cout << "Enter the number of strings:";
    cin >> n;
    vector <string> v(n);
    
    for(int i =0 ; i < n; i++)
        cin >> v[i];
    
    string ans = findLargest(v);
    if(ans != "")
        cout << ans << endl;
    else
        cout << "No Common Element Found!\n";
    return 0;
}
