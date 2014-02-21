#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  	int i,c;
  	bool premier = true;

   	printf("Entrez le nombre: ");
   	scanf("%i",&c);
   
	for (i=2; i*i<c; i++)
	{
		if (c%i==0)
		{
			premier=false;
		}
	}
	
	if (premier)
	printf("%d est premier\n",c);
	else
	printf("%d n'est pas premier\n",c);
	
  system("PAUSE");	
  return 0;
}
