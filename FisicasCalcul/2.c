/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   2.c
 * Author: Guillermo Saldaña
 *
 * Created on 2 de enero de 2021, 08:45 AM
 */

#include <stdio.h>
#include <conio.h>
#define lim 50
#include <iostream.h>

/*
 * 
 */

  void lee(int,int);
  void com(int,int,int);
  void pre(int,int);

void lee(int v[lim],int x)
  {int i;
  for(i=0;i<x;i++)
     {
      cout<<"\nELEMENTO ["<<i<<"] :";
     cin>>v[i];
     }
  }

  void pre(int v[lim],int x)
  {int i;
  for(i=0;i<x;i++)
  cout<<"  "<<v[i]<<"";
  }

  void com(int v[lim],int x,int g)
  {
   int i,b=0;
    for(i=0;i<g;i++)
    {

    if(x==v[i]){
        printf("\n\n"&x,"...  En la pocision,",&i,"   si existe\t ");
       b=1;
       //c=c+1;
      }
    }
    if(b==0)
       printf("elemento no existe");
   }
 
void main()

{ int a[lim],g[lim];
  int n,x;
  clrscr();

  scanf("\n numero de arreglo : ",&n);
  scanf("\n ingrese los valores : \n");
  lee(a,n);
  scanf("\n\n numero a verificar : ",&x);
  com(a,x,n);


    return (EXIT_SUCCESS);
}

