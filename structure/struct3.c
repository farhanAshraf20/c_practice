#include<stdio.h>
int i =6;
int main()
{
	struct a2 
	{
        int i;
		char city[6];
	}s1;
	//struct simp s1;
	s1.i = 6;
	s1.city[6]= "indore";
	printf("%s",s1.city);
	printf("%d", s1.i);
	return 0;
}