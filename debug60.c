#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc!=1)
	{
		printf("Incorrect Parameters");
		exit(0);
	}
	FILE *fp;
	int i=0; int n;
	fp=fopen(argv[1],"w");
	while(1)
	{
		n=rand()%9999;
		fprintf(fp,"%d",n);
		i++;
		if (i<=10000) fprintf(fp,",");
		else break;
	}
	fclose(fp);
	return 0;
}
