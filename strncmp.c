int strncmp(long unsigned int size, const char *str1, const char *str2)
{
	int i = 0;
	while(i < (32*size))
	{
		if(*(&str1) != *(&str2))
			return 1;
		str1 = str1 +1;
		str2 = str2 +1;	
		i = i +1;
	}
	i = 0;
	return 0;
}
