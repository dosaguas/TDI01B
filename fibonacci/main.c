#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
	if(n<2)
		return n;
	else
		return fibonacci(n-1) + fibonacci(n-2);	
}


int main(int argc, char *argv[]) {
	
	int i,num;
	
	printf("Entrez le nombre: ");
	scanf("%i",&num);
	
	for (i=0; i<=num; i++)
	{
		printf("%i ",fibonacci(i));
	}
	
	printf("\n");
	system("pause");
	return 0;
}
