#include <stdio.h>

#define WIDTH	 4
#define LEN		(WIDTH * WIDTH)
#define SWAP(a, b)	do{\
	typeof(a) tmp = a;\
	a = b;\
	b = tmp;\
}while(0)
int cnt = 0;
int sum = 0;
unsigned char magic[WIDTH][WIDTH];

int cal_horizontal(int width, int height, int sum, unsigned char * data)
{
	for(int j = 0; j < height; j++){
		int s = 0;
		for(int i = 0; i < width; i++){
			s += magic[j][i];
		}
		if(s != sum){
			return 1;	
		}
	}
	
	return 0;
}

int cal_verticality(int width, int height, int sum, unsigned char *data)
{
	for(int i = 0; i < width; i++){
		int s = 0;
		for(int j = 0; j < height; j++){
			s += magic[j][i];
		}
		if(s != sum){
			return 1;	
		}
	}

	return 0;
}
int cal(int len, int sum, unsigned char * data)
{
	int size = LEN - len;
	if((size / WIDTH))
	{
		if(cal_horizontal(WIDTH, size / WIDTH, sum, data)){
			return 1;
		}
	}
	if(size > WIDTH * (WIDTH - 1)){
		return cal_verticality(size - WIDTH * (WIDTH - 1), WIDTH, sum, data);
	}

	return 0;
}

int permutation(int n, unsigned char *a)
{
	if(cal(n, sum, (unsigned char*)magic)){
		return 1;
	}
	if(n == 1){
		//for(int i = 0; i < WIDTH; i++){
		//	printf("%3d", ((unsigned char *)magic)[i]);
		//}
		//printf("\n");
		//return 0;

		cnt++;
		return 0;
		for(int j = 0; j < WIDTH; j++){
			for(int i = 0; i < WIDTH; i++){
				printf("%3d, ", magic[j][i]);
			}
			printf("\n");
		}
		printf("\n\n");
		return 0;
	}
	for(int i = 0; i < n; i++){
		SWAP(a[0], a[i]);
		permutation(n - 1, &a[1]);
		SWAP(a[0], a[i]);
	}

	return n - 1;
}
void main(void)
{
	if(WIDTH * WIDTH > 256){
		printf("error:too big!\n");
	}

	int ss = 0;
	for(int i = 0; i < LEN; i++){
		((unsigned char *)magic)[i] = i + 1;
		ss += i + 1;
	}
	if(ss % WIDTH != 0){
		printf("error data\n");
		return;
	}
	sum = ss / WIDTH;
	printf("sum = %d\n", sum);


	permutation(LEN, (unsigned char *)magic);
	printf("cnt=%d\n", cnt);
}
