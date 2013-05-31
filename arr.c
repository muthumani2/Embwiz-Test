#include<stdio.h>

int main()
{
	char *a1[5];
	a1[0]="muthu";
	a1[1]="mani";
	a1[2]="embb";
	a1[3]="train";
	a1[4]="ing";

	printf("String In Array a1[0] : %s\n",*a1);

	printf("String In Array a1[1] : %s\n",a1[1]);

	printf("String In Array a1[2] : %s\n",*(a1+2));

	printf("String In Array a1[3] : %s\n",a1[3]);

	printf("String In Array a1[4] : %s\n",*(a1+4));

	return 0;
}
