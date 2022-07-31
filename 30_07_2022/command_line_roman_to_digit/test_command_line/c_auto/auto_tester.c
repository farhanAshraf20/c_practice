#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <string.h>
//char pointer array


int main()
{


execl("./test","input.txt", NULL);

/*
	FILE *fptr = NULL;
	char *line;
	size_t n=0;
	int i;
	
	char fptr = fopen("input.txt", "r");
	
	while(getline(&line, &n, fptr) != -1)
	{
		
		//while(line[i] != '\n')
		//{ 
			//printf("%ld -- %s", strlen(line), line);
			
			//execl("./test",line, NULL);
			execl("./test",line, NULL);
			
			//i++;
		
        		
		//}
		
		//i=0;
	}

*/

/*

	FILE    *textfile;
	char    ch;

	textfile = fopen("input.txt", "r");
	
	if(textfile == NULL)
	{
		return 1;
	}
	

	while((ch = fgetc(textfile))!=EOF) 
	{
		//putchar(ch);
		printf("input %c\n",ch);
		char *args[]={"./test","VI",NULL};
        	execv(args[0],args);
	}
*/

        //A null terminated array of character
        //pointers
        
         //execv(args,args);
         
	//fclose(textfile);
        printf("Ending-----");
     
    return 0;
}
