#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *f1;
	FILE *f2;
	char ch;
	if((f1=fopen("test.c","r"))==NULL)
	{
		printf("open tset.c fail\n");
		exit(0);
	}
	if((f2=fopen("newfile.c","w"))==NULL)
	{
		printf("open newfile.c fail\n");
		exit(0);
	}

	ch = fgetc(f1);
	while(ch != EOF)
	{
		putchar(ch);
		fputc(ch,f2);
		ch = fgetc(f1);
	}
	fclose(f1);
	fclose(f2);
}
