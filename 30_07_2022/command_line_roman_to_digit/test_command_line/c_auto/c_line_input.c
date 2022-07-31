#include<stdio.h>
#include <string.h>



int main(int argc, char* argv[])
{
	int i=19;
	FILE *out=fopen("output.txt","w");
	
	printf("No of argument : %d \n",argc);
	printf("Argument No1 :%s \n",argv[0]);	
	printf("Argument No2 :%s \n",argv[1]);
	
	fputs(argv[1],out);
	fprintf(out, " : %d", i);
	
	fclose(out);
	

/*
	FILE *fptr = NULL;
	char *line;
	size_t n=0;
	int i;
	
	char 
	fptr = fopen(argv[0], "r");
	
	while(getline(&line, &n, fptr) != -1)
	{
		while(line[i] != '\n')
			{ 
				printf("%ld -- %s", strlen(line), line);
				
				i++;
			}
			
			//i=0;
	}	
	
	
	
	//printf("No of argument : %d \n",argc);
	printf("Argument No1 :%s \n",argv[0]);
	//*argv = *(argv+1);
	/*
	for(int i=1;i<10;i++)
	{
		//printf("Argument No2 :%s \n",argv[i]);
	}
*/
return 0;
}
