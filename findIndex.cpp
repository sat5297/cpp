#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ele;
    cout << "Enter the dimensions of array:";
    cin >> n >> m;
    vector < vector < int > > v(n,vector<int>(m,0));
    cout << "Enter "<< n*m << " elements.\n";
    for(int i =0;i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    
    cout << "Enter the element to search:";
    cin >> ele;
    int x=-1,y=-1;
    for(int i =0;i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == ele)
                {x=i,y=j;break;}
        }
    }
    if(x!=-1&&y!=-1)
        cout << "Element found at "<< x << " "<<y <<endl;
    else
        cout << "Element not found!\n";
    return 0; 
}
