#include<bits/stdc++.h>
using namespace std;

template <typename T> T maximum(T x, T y){
	return ( x > y ) ? x : y;
}

template <typename T> T minimum(T x, T y){
	return ( x > y ) ? x : y;
}

template <typename T> T addition(T x, T y){
	return x + y;
}

template <typename T> T substraction(T x, T y){
	return x - y;
}

template <typename T> T multiplication(T x, T y){
	return x * y;
}

template <typename T> T division(T x, T y){
	return x/y;
}


int main(){
	cout << "Maximum of 2 numbers based on template : \n"; 
	cout << maximum(1,2) << endl;
	cout << maximum(1.0,2.0) << endl;
	cout << maximum(1L,2L) << endl;
	cout << maximum(1.0f,2.0f) << endl;
	
	cout << "Minimum of 2 numbers based on template : \n"; 
	cout << minimum(1,2) << endl;
	cout << minimum(1.0,2.0) << endl;
	cout << minimum(1L,2L) << endl;
	cout << minimum(1.0f,2.0f) << endl;
	
	cout << "Addition of 2 numbers based on template : \n"; 
	cout << addition(1,2) << endl;
	cout << addition(1.0,2.0) << endl;
	cout << addition(1L,2L) << endl;
	cout << addition(1.0f,2.0f) << endl;
	
	cout << "Substraction of 2 numbers based on template : \n"; 
	cout << substraction(1,2) << endl;
	cout << substraction(1.0,2.0) << endl;
	cout << substraction(1L,2L) << endl;
	cout << substraction(1.0f,2.0f) << endl;
	
	cout << "Multiplication of 2 numbers based on template : \n"; 
	cout << multiplication(1,2) << endl;
	cout << multiplication(1.0,2.0) << endl;
	cout << multiplication(1L,2L) << endl;
	cout << multiplication(1.0f,2.0f) << endl;
	
	cout << "Division of 2 numbers based on template : \n"; 
	cout << division(1,2) << endl;
	cout << division(1.0,2.0) << endl;
	cout << division(1L,2L) << endl;
	cout << division(1.0f,2.0f) << endl;
	
	
	return 0;
}
