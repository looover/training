
#include <stdlib.h> 
#include <stdio.h>

#define		NUM		64
#define		ALGN	8

int Max(int * data, int n)
{
	if (n == 1)
		return data[0];

	int max = Max(&data[1], n - 1);
	return data[0] > max ? data[0] : max;
}

int Sum(int * data, int n)
{
	if (n == 1)
		return data[0];

	return data[0] + Sum(&data[1], n - 1);
}

void main(void)
{
	int data[NUM];
	for (int i = 0; i < NUM; i++){
		data[i] = (rand() * 1) % 100;
	}

	for (int i = 0; i < NUM; i++){
		printf("%5d", data[i]);
		if (i % ALGN == ALGN - 1){
			printf("\n");
		}
	}

	int max = Max(data, NUM);
	printf("\nmax = %d\n", max);

	int sum = 0;
	for (int i = 0; i < NUM; i++){
		sum += data[i];
	}
	printf("\nsum = %d\n", sum);

	sum = Sum(data, NUM);
	printf("\nsum = %d\n", sum);
}

