#include <bits/stdc++.h>
using namespace std;

void foo(int z){
	for(int i = 0; i < z; i++){
		cout << "Thread using function pointer as callable\n";
	}
}

class thread_obj{
	public:
		void operator()(int x){
			for(int i = 0; i < x; i++){
				cout << "Thread using function object as callable\n";
			}	
		}
};

int main(){
	cout << "Threads 1, 2 and 3 running independently\n";
	thread th1(foo, 3);
	
	thread th2(thread_obj(), 3);
	
	auto f = [](int x){
		for(int i = 0; i < x; i++){
			cout << "Thread using lambda expression as callable\n";
		}
	};
	
	thread th3(f, 3);
	
	th1.join();
	th2.join();
	th3.join();
	return 0;
}
