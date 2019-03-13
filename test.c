
#include <stdio.h>
#include <string.h>

void main()
{	

	struct nonce_t{
		unsigned int time:1;
		unsigned int taskid:7;
		unsigned int nonce:31;

	}nonce;

	memset(&nonce, 0, sizeof(nonce));
	nonce.time = 1;
	nonce.taskid = 0x08;
	nonce.nonce = 0xffffffff;
	printf("sizeof(nonce)=%d\n", sizeof(nonce));

	unsigned char * chp = (unsigned char *)&nonce;
	for(int i = 0; i < sizeof(nonce); i++){
		printf("0x%2x, ", chp[i]);
		if(i % 4 == 3){
			printf("\n");
		}
	}
	printf("\n");

	printf("(int*)nonce[0]=%x\n\n", *(unsigned int*)&nonce);
	printf("(int*)nonce[1]=%x\n\n", *((unsigned int*)&nonce + 1));

	unsigned int tmp = 0x80402001;
	* chp = (unsigned char *)&tmp;
	for(int i = 0; i < 10; i++){
		printf("%x\n", chp[i]);
	}
}

