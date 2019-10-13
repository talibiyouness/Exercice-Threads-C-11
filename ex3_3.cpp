#include <thread>
#include <iostream> 
#include <mutex>

int somme=0;
std::mutex mtx;
int T[] = {1,2,3,4,5,7,8,9,10}; 



  
void sommeT(int i,int j) 
{  
    mtx.lock();

        for(i; i<=j; i++){
             somme= somme + T[i];    
              }

    mtx.unlock();
} 
 
int main() {

    std::thread t1(sommeT, 0, 3);
    std::thread t2(sommeT, 4, 8);

    t1.join();
    t2.join();

    std::cout <<"La somme: "<< somme <<endl;   

    return 0; 


} 
