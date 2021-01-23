/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ficheros.c
 * Author:Guille Saldaña
 *
 * Created on 19 de enero de 2021, 09:44 AM
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
    char cadena1 [] = "Holaa \n";
    char cadena2 [] = "Fundamentos De la Programacion\n";
    char cadena3 [] = "Grupo 1MC2(linea 3)";
    FILE* fichero;
    fichero = fopen("Hola Mundo.txt", "wt");
    fputs(cadena1, fichero);
    fputs(cadena2, fichero);
    fputs(cadena3, fichero);
    fclose(fichero);
    printf("Proceso completado");
    return 0; 
}

