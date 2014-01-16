#include <stdio.h>
#include <stdlib.h>

int somme(int p)
{
	int c=0;
	
	if (p<10)
	return c + p;
	
	if (p>=10)
	{
		c += p%10;
		p = p/10;
		return c + somme(p);	
	}
}

int main(int argc, char *argv[]) {
	
int N;
	
	printf("Nombre: ");
	scanf("%i",&N);
	
	/*
	while (N>10) {
		S+= N%10;
		N/=10;
	}
	
	S+=N;
	*/

	printf("Somme: %i\n",somme(N));
	
	system("pause");
	return 0;
}
