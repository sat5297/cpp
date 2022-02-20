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
        int n, x, y;
        cin >> n >> x >> y;
                
        int allBuses = n/100;
        
        if(n % 100 > 0)
            allBuses += 1;
        int allBusesPollution = x*allBuses;
        
        //all cars taken
        int totalCars = (n/4);
        
        if(n % 4 > 0)
            totalCars += 1;
        int totalCarsPollution = y*totalCars;
        
        //mix approach
        int buses = n/100;
        int rem = n % 100;
        
        int carTaken = rem / 4;
        if(rem % 4 > 0)
            carTaken += 1;
        
        int carTakenPollution = carTaken * y;
        int busPollution = buses * x;
        
        int totalMixPollution = carTakenPollution + busPollution;
        
        cout << min(totalCarsPollution, min(allBusesPollution,totalMixPollution)) << endl;
    }
    return 0;
}
