#include<stdio.h>
#include<string.h>

int main()
{
	char st1[] = "vXs";
	char st2[] = "cXv";
	
	char *s1, *s2;
	s1 = &st1[0];
	s2 = &st2[0];
	
	int status;
	
	while(*s1 != '\0')
	{
		printf("%c - %c\n", *s1, *s2);
		status = strcmp(s1, s2);
		
		printf("%d\n", status);
		s1++;
		s2++;
	}
	return 0;
}

