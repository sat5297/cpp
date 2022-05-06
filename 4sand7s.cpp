#include<bits/stdc++.h>
using namespace std;

void generate(int num)
{
    if(num > 1000)
        return;
        
    if(num <= 1000 && num != 0)
        cout << num << " ";
    
    generate(num*10 + 4);
    generate(num*10 + 7);
}


int main()
{
    generate(0);
    return 0;
}
