#include <iostream> 
#include <thread>
  

int somme = 0; 
int T[] = {1,2,3,4,5,7,8,9,10}; 

  
void sommeT(int i,int j) {

    int sum=0;
    for(i; i<=j;i++){
        sum= sum + T[i];
    }
            somme= somme+sum;
  
} 
 
int main(){ 

    std::thread t1(sommeT,0,3);
    std::thread t2(sommeT,4,8);

    t1.join();
    t2.join();

    std::cout <<"La somme: "<< somme <<endl;
        
    return 0; 
} 
