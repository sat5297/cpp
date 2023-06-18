#include <bits/stdc++.h>
using namespace std;

void monoParam(int x){
	for(int i = 0; i < x; i++){
			cout << "Thread using function pointer as callable in mono function\n";
	}
}

void dualParam(int x, int y){
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << "Thread using function pointer as callable in dual function\n";
		}
	}
}

void tripleParam(int x, int y, int z){
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			for(int k = 0; k < z; k++){
				cout << "Thread using function pointer as callable in triple function\n";
			}
		}
	}
}

class thread_obj{
	public:
		void operator()(int x){
			for(int i = 0; i < x; i++){
				cout << "Thread using function object as callable in mono operator\n";
			}	
		}
		
		void operator()(int x, int y){
			for(int i = 0; i < x; i++){
				for(int j = 0; j < y; j++){
					cout << "Thread using function object as callable in dual operator\n";
				}
			}	
		}
		
		void operator()(int x, int y, int z){
			for(int i = 0; i < x; i++){
				for(int j = 0; j < y; j++){
					for(int k = 0; k < z; k++){
						cout << "Thread using function object as callable in triple operator\n";
					}
				}
			}	
		}
};

int main(){
	cout << "Threads 1, 2 and 3 running independently\n";
	// Using Function Pointer as callable. 
	thread th1(monoParam, 24);
	thread th2(dualParam, 4, 6);
	thread th3(tripleParam, 2, 3, 4);
	
	// Using Function Object as callable.
	thread th4(thread_obj(), 24);
	thread th5(thread_obj(), 4, 6);
	thread th6(thread_obj(), 2, 3, 4);
	
	auto f1 = [](int x){
		for(int i = 0; i < x; i++){
			cout << "Thread using lambda expression as callable in mono function\n";
		}
	};
	
	auto f2 = [](int x, int y){
		for(int i = 0; i < x; i++){
			for(int j = 0; j < y; j++){
				cout << "Thread using lambda expression as callable in dual function\n";
			}
		}
	};
	
	auto f3 = [](int x, int y, int z){
		for(int i = 0; i < x; i++){
			for(int j = 0; j < y; j++){
				for(int k = 0; k < z; k++){
					cout << "Thread using function object as callable in triple function\n";
				}
			}
		}	
	};
	
	//Using Lambda Expression as callable.
	
	thread th7(f1, 24);
	thread th8(f2, 4, 6);
	thread th9(f3, 2, 3, 4);
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();
	th5.join();
	th6.join();
	th7.join();
	th8.join();
	th9.join();
	return 0;
}


// g++ -std=c++11 -pthread multithreading.cpp
