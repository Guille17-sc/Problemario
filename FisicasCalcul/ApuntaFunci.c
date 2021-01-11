/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ApuntaFunci.c
 * Author: ASUS MASTER
 *
 * Created on 03 de enero de 2021, 8:32 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
      static double(action[3])(double) = ffabs, sqrt, expg;
                    int i;
                    double x,y;

         x=1.0;
                    printf("De un numero (0-2): ");
                    scanf("%d",&i);
                    y = (*action[i])(x);
                    printf("nn encontramos: %lf nn",y);

    return 0;
}

