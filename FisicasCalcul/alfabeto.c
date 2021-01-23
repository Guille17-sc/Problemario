/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   alfabeto.c
 * Author: Guille Saldaña
 *
 * Created on 12 de enero de 2021, 05:23 PM
 */

#include <stdio.h>
#include <string.h>

#define TAM_LINEA 40
#define TAM_TEXTO 200

void main()
{

char texto[TAM_TEXTO];
int contador, palabras=1;

printf("\n\tEscribe un texto de %d caracteres como maximo. :\n\t", TAM_TEXTO);

gets(texto);

contador=0;
while(contador<strlen(texto))
{

if(texto[contador]==' ' && texto[contador-1]!=' ' && contador>0)
palabras++;

contador++;

}

printf("\n\n\tHay: %d caracteres, %d palabras y %d lineas", strlen(texto), palabras, (caracteres/TAM_LINEA));

}