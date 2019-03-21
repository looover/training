#include <stdio.h>
#include <string.h>

void main(void)
{

	char * src = "aaabdbckaaabcljfabsdndabc";
	char * s0 = src;
	char * s_match = "aab";
	char * s_replace = "1234";
	char data[128];
	char * dst = data;

	const int len_match = strlen(s_match);
	const int len_replace = strlen(s_replace);
	const int len_src = strlen(src);

	memset(data, 0, 128);

	while (*s0)
	{
		int flg = 0;
		char * s1 = s0;
		for (int i = 0; i < len_match; i++){
			if (*s1++ != s_match[i]){
				break;
			}
			else if (i == len_match - 1){
				flg = 1;
			}
		}
		
		if (flg == 1){
			memcpy(dst, s_replace, len_replace);

			s0 += len_match;
			dst += len_replace;
		}
		else{
			*dst++ = *s0++;
		}
	}

	printf("%s\n", data);
}


