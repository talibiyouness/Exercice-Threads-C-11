#include <iostream>
#define taille 9 

int somme = 0 ;
int T[] = {1,2,3,4,5,7,8,9,10}; 

int sommeT(int T[]){

	for (int i=0; i<taille; i++)
	{
		somme= somme + T[i];
	}
	return somme;
}

int main(){
	int Sum = sommeT(T);
	std::cout << Sum;
}

