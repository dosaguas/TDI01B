#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int N;
extern char stagiers[30][25];
extern float notes[30][4];

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
             scanf("%f",&notes[i][j]);
             total+=notes[i][j];
         }
         notes[i][3] = total/3.0;
         printf("\n");
     }
} 

void affichagenotes()
{
  int i,j;
  system("cls"); 
  printf("Notes:\n");
  for (i=0; i<N; i++)
  {
      printf("%i.%s: ", i+1, stagiers[i]);
      for (j=0; j<3; j++)
      {
          printf("\t");
          printf("%.02f",notes[i][j]);
      }
      printf("\n\t\t\t\t\t\tMoyenne: %.02f\n", notes[i][3]);
  }
  system("pause");
}

void affichageclass()
{
     int index[30][2];
     int i,j,k,a,b;
     
     system("cls");
     printf("Notes classes par moyenne:\n");
     for (i=0; i<N; i++)
     {
         k=0;
         for (j=0; j<N; j++)
         {
             if (notes[i][3] < notes[j][3])
             {
                k++;
             }
         }
         index[i][0]=i;
         index[i][1]=k;
     }
     
     for (i=0; i<N; i++)
     {
         k=0;
         for (j=0; j<N; j++)
         {
             if (index[i][1] > index[j][1])
             {
                k++;
             }
         }
         
         a=index[k][1];
         b=index[k][0];
         
         index[k][1]=index[i][1];
         index[k][0]=index[i][0];
         
         index[i][1]=a;
         index[i][0]=b;
     }
         
     
     
       for (k=0; k<N; k++)
       {
           printf("%i. %s:", k+1, stagiers[index[k][0]]);
           printf("\tMoyenne: %.02f\n", notes[index[k][0]][3]);
      }
      system("pause");
}

void noteparnumero()
{
     int i,j, total;
     system("cls");
     printf("Entrez le numero: ");
     scanf("%i",&i);
     
     if (i>N)
     {
        printf("Entrez les notes:\n");
        for (j=0;j<3;j++)
        {
            scanf("%f",&notes[i][j]);
            total+=notes[i][j];
        }
        notes[i][3] = total/3.0;
     } else printf("Pas de stagier\n");
     system("pause");  
}

void noteparrecherche()
{
     int i,j, total;
     char nom[25];
     system("cls");
     printf("Entrez le nom: ");
     gets(nom);
     
     i=cherche(nom);
     if (i != -1)
     {
           printf("Entrez les notes:\n");
           for (j=0;j<3;j++)
           {
               scanf("%f",&notes[i][j]);
               total+=notes[i][j];
           }
           notes[i][3] = total/3.0;
     } else printf("Le nom n'existe pas\n");
     system("pause");
}

void notesmenu()
{
     char c;
     
     while (c!='0')
    { 
          system("cls");
          printf("_________________________________________________");
          printf("\n1. Saisie de numero");
          printf("\n2. Recherche et saisie");          
          printf("\n3. Affichage du tableau de notes");
          printf("\n4. Affichage du classement par moyenne");
          printf("\n5. Saisie de liste");
          printf("\n0. Sortir\n"); 
          printf("_________________________________________________");          
          printf("\nEntrez votre option: ");
          c=getch(); 
          
          switch(c){
            case '1':
                noteparnumero();
                break;
            case '2':
                noteparrecherche();
                break;
            case '3':
                affichagenotes();
                break;
            case '4':
                affichageclass();
                break;
            case '5':
                entrernotes();
                break;
            case '0':
                 break;
            }
    }
}
