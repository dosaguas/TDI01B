#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int N;
extern char stagiers[30][25];
extern int notes[30][4];

void entrernotes()
{
     int i,j,total,n1,n2,n3;
     
     system("cls");
     for (i=0; i<N; i++)
     {
         total=0;
         printf("Entrez les notes du stagier %s\n", stagiers[i]);
         for (j=0;j<3;j++)
         {
             scanf("%i",&notes[i][j]);
             total+=notes[i][j];
         }
         notes[i][3] = total/4;
         printf("\n");
     }
} 

   

void moyenne()
{
  int i;
  system("cls"); 
  printf("La moyenne des stagiers:\n");
  for (i=0; i<N; i++)
  {
      printf("%i. %s: %i\n", i+1, stagiers[i],notes[i][3]);
  }
  system("pause");
}
