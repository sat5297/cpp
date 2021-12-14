#include<bits/stdc++.h>
using namespace std;

bool isCheck(int a,int b, int p, int q)
{
	cout << "check " <<a << " " << b << " " << p << " " << q << endl;
	if((((a+1) == p)||((a-1)==p)||((b+1)==q)||((b-1)==q)))
		return true;
	else
		return false;
}

bool update(int a, int b, int c, int d)
{
	cout<<"update " << a << " " << b << " " << c << " " << d << endl;
	if((abs(a-c) > 1) || (abs(b-d)>1))
		return true;
	else
		return false;
}

bool notattack(int a, int b)
{
	cout <<"!attack "<< a << " "<< b << " " <<!(a == b) << endl;
	return !(a == b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int kx,ky,r1x,r1y,r2x,r2y;
		cin >> kx >> ky;
		cin >> r1x >> r1y;
		cin >> r2x >> r2y;
		
		if(kx == 8 || ky == 8 || kx == 1 || ky == 1)
		{
			if((r1x == r2x))
			{
				if(!isCheck(kx,ky,r1x,r1y)&&!isCheck(kx,ky,r1x,r1y))
					cout << "1NO\n";
				else if(isCheck(kx,ky,r1x,r1y)&&notattack(ky+1,r2y)&&notattack(ky-1,r2y))
					cout << "12NO\n";
				else if(isCheck(kx,ky,r2x,r2y)&&notattack(ky+1,r1y)&&notattack(ky-1,r1y))
					cout << "2NO\n";
				else
					cout << "3YES\n";
			}
			
			else if((r1y == r2y))
			{
				if(!isCheck(kx,ky,r1x,r1y)&&!isCheck(kx,ky,r2x,r2y))
					cout << "NO\n";	
				else if(isCheck(kx,ky,r1x,r1y)&&update(kx,ky,r2x,ky)&&notattack(kx+1,r2x)&&notattack(kx-1,r2x))
					cout << "11NO\n";
				else if(isCheck(kx,ky,r2x,r2y)&&update(kx,ky,r1x,ky)&&notattack(ky+1,r1y)&&notattack(ky-1,r1y))
					cout << "21NO\n";
				else
					cout << "31YES\n";
			}
			
			else if(isCheck(kx,ky,r1x,r1y)&&(update(kx,ky,kx,r2y)||update(kx,ky,r2x,ky))&&(notattack(ky+1,r2y) && notattack(ky-1,r2y)))
				cout << "32YES\n";
			
			else if(isCheck(kx,ky,r2x,r2y)&&(update(kx,ky,kx,r1y)||update(kx,ky,r1x,ky)))
				cout << "4YES\n";
			
			else
				cout << "5NO\n";
		}
		else
			cout << "6NO\n";
	}
	return 0;
}
