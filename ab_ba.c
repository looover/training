
#include <stdio.h>

void main(void)
{
	int cnt = 0;
	for(unsigned char i = 0; i < 256; i++){
		unsigned char a = i << 1;
		unsigned char b = a >> 1;
		if(i == b){
			printf("%2x,%2x\n", b, a);
			//if(++cnt % 8 == 0){
			//	printf("\n");
			//}
		}
	}
}
