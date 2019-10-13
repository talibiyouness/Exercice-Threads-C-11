#include <thread>
#include <iostream>

int M1[3][3]; 

M1[0][0]=1;
M1[0][1]=2;
M1[0][2]=3;

M1[1][0]=4;
M1[1][1]=5;
M1[1][2]=6;

M1[2][0]=7;
M1[2][1]=8;
M1[2][2]=9;

int M2[3][3]; 

M2[0][0]=10;
M2[0][1]=20;
M2[0][2]=30;

M2[1][0]=40;
M2[1][1]=50;
M2[1][2]=60;

M2[2][0]=70;
M2[2][1]=80;
M2[2][2]=90;


int M3[3][3]; 

M3[0][0]=0;
M3[0][1]=0;
M3[0][2]=0;

M3[1][0]=0;
M3[1][1]=0;
M3[1][2]=0;

M3[2][0]=0;
M3[2][1]=0;
M3[2][2]=0;


void M3ij(int i){
     for (int j=0;j<3;j++){
        for (int k=0;k<3;k++){

            M3[i][j]=M1[i][k]*M2[k][j]+M3[i][j];
              
              }
                }
    } 

void CalculM3(){

      std::thread th[3];
         int count=0;
         for (int i=0;i<3;i++){

                th[count]= std::thread(M3ij,i);
                    th[count].join();
                    count++;
            }

        std::cout << "Resultat: \n" << endl;
        Affichage();
        std::cout << endl;
}


    
    void  Affichage(){

          for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                std::cout << M3[i][j] << " | ";
            }
            std::cout <<endl;
            }
         }    



 int main() {

    CalculM3();
    return 0; 

} 
