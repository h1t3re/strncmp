#include "../../include/strlen.h"
#include <stdlib.h>

int strncmp(long unsigned int length, const char *str1, const char *str2)
{
	int i = 0;
	char *array1 = (char *)malloc(strlen(str1)*sizeof(char));
	char *array2 = (char *)malloc(strlen(str2)*sizeof(char));
	char *array_backup1 = array1;
	char *array_backup2 = array2;

	while(i < strlen(str1))
	{
		array1[i] = str1[i];
		i = i +1;
	}
	i = 0;
	while(i < strlen(str2))
	{
		array2[i] = str2[i];
		i = i +1;
	}
	i = 0;
	while(i < length)
	{
		if(*((char *)&array1[0]) != *((char *)&array2[0]))
			return 1;
		array1 = array1 +1;
		array2 = array2 +1;
		i = i +1;
	}
	while(i >= 0)
	{
		array1 = array1 -1;
		array2 = array2 -1;
		i = i -1;
	}
	free(array_backup1);
	free(array_backup2);
	return 0;
}
