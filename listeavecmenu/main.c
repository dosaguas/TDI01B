#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float notes[30][4];
char stagiers[30][25];
int N=30;
char tmp[5];

void entrerlist()
{ 
  int i;
  system("cls"); 
  for (i=0; i<30; i++)
  {
      printf("Entrez le nom du stagier %i: ", i+1);
      gets(stagiers[i]);
      if (strcmp(stagiers[i],".")==0)
      {
         N = i;
         break;
      }
  }
}

void ajouternom()
{
      int i;
      system("cls"); 

      printf("Entrez le nom du stagier a ajouter: ");
      gets(tmp);
      if (cherche(tmp)!=-1)
      {
         printf("Le nom existe deja\n");
      }
      else
      {
          strcpy(stagiers[N],stagiers[N+1]);
          strcpy(stagiers[N],tmp);
          N++;
      }
      system("pause");
}

void affichage()
{
  int i;
  system("cls"); 
  printf("La liste de stagiers:\n");
  for (i=0; i<N; i++)
  {
      printf("%i. ", i+1);
      puts(stagiers[i]);
  }
  system("pause");
}

int cherche(char s[])
{
    int i;
    
    for (i=0; i<N; i++)
    {
         if (strcmp(s,stagiers[i])==0)
         {
            return i;
         }
    }
    
    return -1;
}

void recherche()
{
     int i;
     char rch[20];
     
     system("cls");      
     printf("Nom a chercher: ");
     gets(rch);
     printf("\n");
     
     if (cherche(rch)==-1)
     {
        printf("Le nom n'existe pas\n");
     } 
     else printf("%i. %s\n",cherche(rch)+1, stagiers[cherche(rch)]);
     
     system("pause");
}


void echnotes( int i, int j)
{
     float f;
     int k;
     
     for (k=0; k<4; k++)
     {
         f = notes[i][k];
         notes[i][k] = notes[j][k];
         notes[j][k] = f;
     }
}

void echnom(int i, int j)
{
     char nom[25];
     
     strcpy(nom,stagiers[i]);
     strcpy(stagiers[i],stagiers[j]);
     strcpy(stagiers[j],nom);
}

void tri()
{
     char tries[N][20];
     int i, j, c;
     
     system("cls");          
     /*for (i=0; i<N; i++)
     {
     	c=0;
     	for (j=0; j<N; j++)
		 {
			if (strcmp(stagiers[i],stagiers[j])>0)
			{
				c++;
			}
	     }
    	 strcpy(tries[c], stagiers[i]);
     }
     
   	 	printf("\nLa liste de stagiers tries:\n");
     	for (i=0; i<N; i++)
	 	{
         	printf("%i. ", i+1);
         	puts(tries[i]);
        }*/
        
        for (i=0; i<N; i++)
        {
     	    for (j=0; j<N; j++)
		    {
			    if (strcmp(stagiers[j],stagiers[i])>0)
			    {
				   echnom(i,j);
				   echnotes(i,j);
			    }
            }
         }
        
        system("pause");
}

void modifier()
{
     int i;

     system("cls");     
     printf("Entrez le numero a modifier: ");
     scanf("%i",&i);
     gets(tmp);
     
     if ((i>N)||(i<0))
     {
        printf("\nLe numero n'existe pas\n");
        system("pause");
     }
        
     else 
     { 
        printf("\nLe numero correspond a: %s\n", stagiers[i-1]);
        printf("Entrez le nouveau nom: ");
        gets(stagiers[i-1]);
     }
}

void supprimer()
{
     int i,j;
     char c;
     
     system("cls"); 
     printf("Entrez le numero a supprimer: ");
     scanf("%i",&i);
     printf("\nLe numero correspond a: %s\n", stagiers[i-1]);
     gets(tmp);
     printf("Etes vous sure? (O/N) ");
     scanf("%c",&c);
     
     if (c=='O')
     {
          for ( j=i; j<=N; j++)
          {
              strcpy(stagiers[j-1],stagiers[j]);
              for (i=0;i<4;i++)
              {
                  notes[j-1][i]=notes[j][i];
              }
          } 
          N--;
     }     
}


     
int main(int argc, char *argv[])
{
    char m;

    
    while (m!='0')
    { 
          system("cls");
          printf("_________________________________________________");
          printf("\n1. Entrer la liste des noms");
          printf("\n2. Ajouter un nom");          
          printf("\n3. Recherche d'un nom");
          printf("\n4. Affichage des noms");
          printf("\n5. Tri par ordre alphabetique");
          printf("\n6. Modifier un nom");
          printf("\n7. Supprimer un nom");
          printf("\n8. Gestion de notes");
          printf("\n0. Sortir\n"); 
          printf("_________________________________________________");          
          printf("\nEntrez votre option: ");
          m=getch(); 
          
          switch(m){
            case '1':
                entrerlist();
                break;
            case '2':
                ajouternom();
                break;
            case '3':
                recherche();
                break;
            case '4':
                affichage();
                break;
            case '5':
                 tri();
                 break;
            case '6':
                 modifier();
                 break;
            case '7':
                 supprimer();
                 break;
            case '8':
                 notesmenu();
                 break;
            case '0':
                 break;
            }
    }
	
  return 0;
}
