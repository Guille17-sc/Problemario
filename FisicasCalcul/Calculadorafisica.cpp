/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Guillermo Saldaña
 *
 * Created on 3 de enero de 2021, 11:37 AM
 */

#include <cstdlib>

using namespace std;

void Inte(float);


int main() {
    int opcion;
    float P;
	do	{
			printf("Bienvenido\n");
                        printf("Selecciones la temperatura a cr:\n");
                        printf("1).- HALLAR LA INTENSIDAD \n");
                        printf("2).- CALCULO DE LA FUERZA MAGNETICA \n");
                        printf("3) Salir\n");
                        printf("\n-------------------------------------------------\n");
		          scanf("%d°", &opcion);
                          printf("Ingrese la cantidad:\n");
                          scanf("%f",&P);
                        switch(opcion)	{
                            case 1:{
                             printf("--------------------------------------------------------------\n");
                             printf( "HALLAR LA INTENSIDAD\n\n");
                             scanf("INGRESE EL VOLTAJE: ",&final);
                             scanf("INGRESE LA RESISTENCIA: ",&a);
                                }
                                break;
                                
                            case 2:{
                                cout << "\n\n";
           printf ("-------------------------------------------------------------\n");
           printf ("CALCULO DE LA FUERZA MAGNETICA \n\n");
           scanf("INGRESE LA CARGA ELECTRICA > ",&final);
           scanf("INGRESE LA VELOCIDAD: ", &a);
           scanf("INGRESE EL CAMPO MAGNETICO: ",&b);
            i=1;
                                }
				break;
                                 case 3:
                                    
				break;
				default:
					printf("Salio\n");
				break;

			}
	}while(opcion != 7);
        
        
	return 0;
        
        
        
}
        //funciones
     void Inte(float){
        double I;
        int final;
        
         for (n=1; n<=final; n++) 
                             {
                              I  =(n/a);     
                              cout << I << "\n ";
                                 ++i;
                                 }
                                   cout << "FIN\n";
                                
                      } 
        
     void Fuerza(float){
         double D;
            int final;   
            while (i<=final) 
              {
              D = i*a*b;
               cout << D << "\n ";
               ++i;
              }
            cout << "FIN\n";
     }
   