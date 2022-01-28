#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void merge(vector<int>&arr, int lo, int mid, int hi)
    {
        int i = lo, j = mid+1, k = 0;
        vector<int>temp(hi-lo+1,0);
        
        while(i <= mid && j <= hi)
        {
            if(arr[i] <= arr[j]){
                temp[k] = arr[i];
                i++;
            }
            else{
                for(int p = i; p<=mid; p++)
                    cout << arr[p] << " " << arr[j] << endl;
                temp[k] = arr[j];
                j++;
            }
            k++;
        }
        
        while(i <= mid)
            temp[k++] = arr[i++];
        
        while(j <= hi)
            temp[k++] = arr[j++];
        
        for(int l = 0; l < (hi - lo + 1); l++)
            arr[lo+l] = temp[l];
        
        cout << endl;
        for(int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
        
    }
    
    void mergeSort(vector < int > &arr, int lo, int hi)
    {
        if(lo < hi)
        {
            int mid = (lo + hi)/2;
            mergeSort(arr, lo, mid);
            mergeSort(arr, mid+1, hi);
            merge(arr, lo, mid, hi);
        }
    }
};

int main()
{
    Solution st;
    int n;
    cout << "Enter the number of elements:\n";
    cin >> n;
    vector < int > arr(n,0);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    st.mergeSort(arr,0,n-1);
    cout << endl;
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl; 
    return 0;
}
