#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>



int main()
{
    char *filename = "input.txt";
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: could not open file %s", filename);
        return 1;
    }

    // reading line by line, max 256 bytes
    const unsigned MAX_LENGTH = 256;
    char buffer[MAX_LENGTH];

    while (fgets(buffer, MAX_LENGTH, fp))
    {
        printf("%s", buffer);
        char *args[]={"./test",buffer,NULL};
        printf("%s", *args);
        execv(args[0],args);
}
    // close the file
    fclose(fp);





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
