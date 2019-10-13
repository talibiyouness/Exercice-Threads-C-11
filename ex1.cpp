#include <thread>
#include <iostream>

void HelloWorld() {
	std::cout << "Hello World !\n";
}


int main() {
	
	std::thread H1(HelloWorld);
	std::thread H2(HelloWorld);
	H1.join();
	H2.join();
	return 0;
}
