#include <stdio.h>

void main()
{
	char ch[]="abddba";
	int i,len, pal = 1;
	
	len = strlen(ch);
	for (i=0; i<len/2;i++)
		if (ch[i] != ch[len - 1 -i])
		{
			pal = 0;
			break;
        }	
	if (pal) printf("Palindrome\n");
	else printf("N'est pas palindrome\n");
	system("pause");	
}
