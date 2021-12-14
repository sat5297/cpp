#include<bits/stdc++.h>
using namespace std;

vector < string > split(string s)
{
	vector < string > splitResult;
	string x = "";
	
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == ' ')
		{
			splitResult.push_back(x);
			x = "";
		}
		else
			x += s[i];
	}
	splitResult.push_back(x);
	return splitResult;
}

pair<int,int> vacantSpace(vector<vector<int>>grid,int type)
{
	
}

parkVehicle(vector<vecor<int>>&grid,int regNo, string color)
{

}


int main()
{
	string s;
	do
	{
		std::getline(std::cin>>std::ws,s);
		if(s == "exit")
			exit(0);
		vector < string > input = split(s);
		
		if(input[0] == "create_parking_lot")
		{
			int floors = stoi(input[1]), slots = stoi(input[2]); 
			vector < vector < int >>parkGrid(floors,vector<int>(slots,0));
		}
		
		if(input[0] == "parking_vehicle")
		{
			
		}
		else if(input[0] == "unpark_vehicle")
		{
		
		}
		else if(input[0] == "display")
		{
		
		
		} 	
	}while(true);
}
