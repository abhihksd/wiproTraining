#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int count=0;
	char str1[] = "Hello World, This is a demo on strtok";
	char *token;
	char strings[100][100];

	token = strtok(str1," ");
	//strings[count] = (char *)malloc(strlen(token)+2);

	while(token)
	{
		strcpy(strings[count],token);
		puts(token);
		token = strtok(NULL," ");
		//strings[count] = (char *)realloc(strings[count],strlen(token)+2);

		count++;
	}
	printf("\nDone");
	for(int i=0;i<count;i++)
		printf("\nstrings[%d]=%s",i,strings[i]);
	printf("\n\n");
	return 0;
}