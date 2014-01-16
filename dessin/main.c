#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void dessinercarre(int n, bool r)
{
     int i,j;
     
     for (i=0; i<n; i++)
     {
         for (j=0; j<n; j++)
         {
             if (!r)
             {
                if (i==0 || i==n-1 || j==0 || j==n-1) 
                printf("*");
                else printf(" ");
             } else printf("*"); 
         }
         printf("\n");
     }
}

void dessinertriangle(int n, bool r)
{
    int i,j;
     
     for (i=0; i<n; i++)
     {
         for (j=0; j<=i; j++)
         {
             if (!r)
             {
                if (i==0 || i==n-1 || j==0 || j==i) 
                printf("*");
                else printf(" ");
             } else printf("*"); 
         }
         printf("\n");
     }
}

int main(int argc, char *argv[])
{
    int c, N, i,j;
    bool rempli;
    
    printf("Entrez 0 pour carre, 1 pour triangle: ");
    scanf("%d", &c);
    
    printf("Entrez le nombre d'etoiles: ");
    scanf("%d", &N);
    
    //0 false, 1 true
    printf("Entrez 0 pour vide ou 1 pour rempli: ");
    scanf("%d", &rempli);
    
    switch (c)
    {
           case 0:
                dessinercarre(N, rempli);
                break;
           case 1:
                dessinertriangle(N, rempli);
                break;
    }

    system("PAUSE");	
    return 0;
}
