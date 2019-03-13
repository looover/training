//#include <endian.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

//<< loop left shift; >> loop right shift
//#define _be32toh(x)	(((x & 0x00FF00FF) >> 8) | ((x & 0xFF00FF00) << 8))
//#define _be16toh(x)	(uint16_t)(((x) >> 8) | ((x) << 8))
#define _be16toh(x)	(((x) >> 8) | ((x) << 8))
int main(int argc, char *argv[])
{
	union {
		uint32_t u32;
		uint16_t u16[2];
		uint8_t arr[4];
	} x;

	x.arr[0] = 0x11;

	/* Lowest-address byte */ 
	x.arr[1] = 0x22;
	x.arr[2] = 0x33;
	x.arr[3] = 0x44;

	/* Highest-address byte */ 
	printf("x.u32 = 0x%x\n", x.u32);
	printf("htole32(x.u32) = 0x%x\n\n", be32toh(x.u32));

	printf("x.u16[0] = 0x%x, x.u16[1]=0x%x\n", x.u16[0], x.u16[1]);
	printf("_be16toh(x.u16[0]) = 0x%x\n", _be16toh(x.u16[0]));
	printf("_be16toh(x.u16[1]) = 0x%x\n", _be16toh(x.u16[1])); 

	exit(EXIT_SUCCESS);
} 
