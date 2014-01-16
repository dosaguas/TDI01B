#include <stdio.h>
#include <stdlib.h>


int echelle(int ech, int num, int max)
{
    return (num*ech)/max;
}

void dessin(int taille)
{
     int j;
     for (j=0;j<taille;j++)
     printf("*");
}

int plusgrand(int num[7], int taille)
{
    int k, b;
    
    b=num[0];
    
    for (k=0; k<taille; k++)
    {
        if (num[k]>b)
        b=num[k];
    } 
    return b;
}

int main(int argc, char *argv[])
{
    int e, i;
    int tableau[7];
    
    printf("Entrez l'echelle: ");
    scanf("%d", &e);
    printf("\n");
    
    for (i=0; i<7; i++)
    {
        printf("Entrez la donnee %d: ", (i+1));
        scanf("%d", &tableau[i]);
    }      
    
    printf("\n");
            
    for (i=0;i<7;i++)
    {
        dessin(echelle(e,tableau[i],plusgrand(tableau,7)));
        printf("%d", tableau[i]);
        printf("\n");
    }
    
  printf("\n");
  system("PAUSE");	
  return 0;
}
