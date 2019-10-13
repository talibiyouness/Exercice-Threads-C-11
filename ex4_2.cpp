#include <iostream>
#include <thread>
#include <mutex>
std::mutex mtx;

void pairs(){

	mtx.lock();
	int n=0;
	while(n<=1000){

		if(n%2==0){

			std::cout << n << '\n';
		}
		n++;
	}
	mtx.unlock();
}

void impairs(){

	mtx.lock();
	int n=1;

	while(n<1000){

		if(n%2!=0){

			std::cout << n << '\n';
		}
	n++;
	}
	mtx.unlock();
}

int main(){

	std::thread T1(pairs);
	std::thread T2(impairs);
	T1.join();
	T2.join();

	return 0 ;
}
