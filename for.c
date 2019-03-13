#include <stdio.h>

void main(void)
{
	for(int i = 0; i < 8; i++){
		printf("i=%d\n", i);
		continue;
		i = 0;
	}
}
