#include <stdio.h>

//202410262156
//

int main()
{
	double nc ;
	
	for (nc = 0.0; getchar() != EOF; nc++) 
		;

	printf("%.0f\n", nc);

	return 0;
}

