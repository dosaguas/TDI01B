#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>



tester(int n[4], int r[4], int s[4])
{
     int i,j;
     
     for (i=0; i<4; i++)
     {
     	 s[i]=-1;
         for (j=0;j<4; j++)
         {
             if (r[i]==n[j])
             {
                s[i]=1;
             }
             
         }
         
         if (r[i]==n[i])
         {
            s[i]=0;
         }
         
     }    
}     

bool resultat(int s[4])
{
     if (s[0]==0 && s[1]==0 && s[2]==0 && s[3]==0)
     {
        return true;
     }	
	 else return false; 
}

cas(int a)
{
	switch (a)
	{
		case 0:
			printf("est en place");
			break;
		case 1:
			printf("n'est pas en place");
			break;
		case -1:
			printf("n'existe pas");
			break;
	}
}

int main(int argc, char *argv[])
{
  int i;
  int n[4], r[4], s[4];
  
  //generation de numeros
  srand(time(NULL)); 

  for (i=0;i<4;i++)
  {
      n[i]=rand()%10;
  }
  
  //bucle du jeu
  while (!resultat(s))
  {

  	printf("Entrez 4 numeros (N-N-N-N): ");
  	scanf("%d-%d-%d-%d",&r[0],&r[1],&r[2],&r[3]);
  	
  	//n pour les numero
  	//r pour les reponses
  	//s pour l'etat: 0 en place, 1 pas en place, -1 n'existe pas
  	tester(n,r,s);
  
  	for (i=0; i<4; i++)
  	{
  		printf("\n%d ",r[i]);
  		cas(s[i]);
  	}
  
  	if (!resultat(s))
  	{
  		printf("\n\nEssayez un autre fois!\n\n");
  	}
  
  	if (resultat(s))
  	{
  		printf("\n\nBravo! Vous avez reussi!\n\n");
  	}  
  }  
  
  system("pause");	
  return 0;
}
