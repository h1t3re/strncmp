#include <stdio.h>
#include "strncmp.h"

int main()
{
	int i = 0;
	char *tmp = "equal";
	char *array = (char *)malloc(4*sizeof(char));
	
	while(i < 4)
	{
		array[i] = tmp[i];
		i = i +1;
	}
	printf("%d\n", strncmp(4, array, array));
	printf("%d\n", strncmp(4, array, "aqual"));
	return 0;
}
