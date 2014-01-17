#include <stdio.h>

int main()
{
	int N, M;
	
	printf("Entrez le nombre: ");
	scanf("%i",&N);
	
	M = 0;
	
	do 
	{
		M = (M*10) + (N%10);
		N = N / 10;
	} while (N>0);
	
	printf("%i\n",M);
	
	system("pause");
	return 0;
}
