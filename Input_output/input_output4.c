#include<stdio.h>
//int fgetc(FILE *fp)
int main()
{
    FILE *fp = NULL;
    char c ='\0';
    fp = fopen ("input_output1.c","r");

    if (fp == NULL)
    {
        printf("could not open file input_output1.c");
        return 1;
    }

    printf("Reading the file input_output1.c");

    while(1)
    {
        c = fgetc(fp); // reading the file
        if (c == EOF)
        break;

        printf("%c",c);
    }

    printf("\nClosing the file input_output.c\n");
    fclose(fp); //close the file

    return 0;
}