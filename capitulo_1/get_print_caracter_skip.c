#include <stdio.h>

// 202410261934
//
//

int main()
{
	int ch;

	for (int i = 0; i < 10; i++) {
		ch = getchar();
		if (ch == '\n') { 
			i--;
		       	continue;
		}
		putchar(ch);
	}

	return 0;
}
