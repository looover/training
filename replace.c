#include <stdio.h>
#include <string.h>

void main(int argc, unsigned char **argv)
{
	if(argc < 4){
		printf("too less param\n");
		return;
	}

	int offset;
	sscanf(argv[2], "%d", &offset);
	printf("offset=%d\n", offset);

	unsigned char data[64];
	memset(data, 0, 64);
	strcpy(data, argv[3]);
	printf("data=%s\n", data);

	char *file = argv[1];
	printf("file=%s\n", file);

	FILE *fp = NULL;
	if(fp = fopen(file, "r+")){
		if(fseek(fp, offset, SEEK_SET) != 0){
			printf("seek error\n");
		}else{
			fwrite(data, sizeof(char), strlen(data), fp);
		}
		fclose(fp);
	}
	else{
		printf("open faild\n");
	}

}
