#include<bits/stdc++.h>
using namespace std;

template <typename T> T maximum(T x, T y){
	return ( x > y ) ? x : y;
}

int main(){
	cout << "Maximum of 2 numbers based on template : \n"; 
	cout << maximum(1,2) << endl;
	cout << maximum(1.0,2.0) << endl;
	cout << maximum(1L,2L) << endl;
	cout << maximum(1.0f,2.0f) << endl;
	return 0;
}
