#include <stdio.h>

int strncmp(long unsigned int length, const char *str1, const char *str2)
{
	int i = 0;
	void *pointer1;
	void *pointer2;
	pointer1 = (char *)str1;
	pointer2 = (char *)str2;
	while(i < length)
	{
		if(*((char *)&pointer1[0]) != *((char *)&pointer2[0]))
			return 1;
		pointer1 = pointer1 +1;
		pointer2 = pointer2 +1;
		i = i +1;
	}
	i = 0;
	return 0;
}
