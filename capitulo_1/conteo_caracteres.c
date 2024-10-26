#include <stdio.h>

//202410262150
//

int main()
{
	unsigned long nc = 0;
	
	while (getchar() != EOF) 
		++nc;

	printf("%ld\n", nc);

	return 0;
}

