#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int MAXI = 1000;
	int i;
	char LIGNE[MAXI];
	printf("Phrase: ");
	gets(LIGNE);
	
	for (i=strlen(LIGNE)-1; i>=0; i--)
	{
		printf("%c",LIGNE[i]);	
	}
	
	printf("\n");
	system("pause");
	return 0;
}
