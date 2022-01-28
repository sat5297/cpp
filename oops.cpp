#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int find(int key, int arr[], int n)
    {
        cout << "\nFinding: " << key << endl;
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
            if(arr[i] == key)
                return 1;
        }
        return 0;    
    }
    
    int LinearSearch(int key,int arr[],int n)
    {
        return find(key,arr,n);
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)cin >> arr[i];
    int key;
    cin >> key;
    Solution *st;
    int ans = st->LinearSearch(key,arr,n);
    cout << ans << endl;
    if(ans)cout << "TRUE\n";
    else    cout << "FALSE\n";
    return 0;
}
