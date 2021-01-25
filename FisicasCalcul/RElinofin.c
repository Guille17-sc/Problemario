/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RElinofin.c
 * Author: Guillermo Saldaña 
 *
 * Created on 21 de enero de 2021, 03:45 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int factorial(int numero){
 if (numero > 1) return (numero*factorial(numero-1));
 else return(1);
}
int main (){
 int n;
 printf("Introduce el número: ");
 scanf("%d",&n);
 printf("El factorial es %d", factorial(n));
}