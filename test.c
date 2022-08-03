/*********************************************************************
Roman numeral (n)	Decimal value (v)
	I			1
	IV			4
	V			5
	IX			9
	X			10
	XL			40
	L			50
	XC			90
	C			100
	CD			400
	D			500
	CM			900
	M			1000
	
*****************************************************************************/
#include <stdio.h>
#include <string.h>

char fix_letter[7]={'I','V','X','L','C','D','M'};

int fix_roman_no[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};



int main()
{
	//int fix_roman_no[13] ={1,4,5,9,10,40,50,90,100,400,500,900,1000};
	int size=0,one_char=-1;
	char *roman_no;
	char *tempPtr;
	
	
	tempPtr = roman_no;
	
	
	printf("Enter A Roman No (I to M) : ");
	scanf("%s", roman_no);
	getc(stdin);
	printf("%s\n",roman_no);
	
	
	while(*tempPtr != '\0')
	{
		size += sizeof(*tempPtr); 
		tempPtr++;
	}
	printf("size of input : %d\n",size);
	
	
	tempPtr = fix_letter;
		
	if(size == 1)
	{
		for(int i=0; i<7;i++)
		{
			if(strcmp(*roman_no, *tempPtr))
			{
				one_char = i;
				break;
			}
			
			roman_no++;
			tempPtr++;
		}
	}
	
	
	
	switch(one_char)
	{
		case 0: printf("\n%d\n",fix_roman_no[0]);
		break;
		
		case 1: printf("\n%d\n",fix_roman_no[2]);
		break;
		
		case 2: printf("\n%d\n",fix_roman_no[4]);
		break;
		
		case 3: printf("\n%d\n",fix_roman_no[6]);
		break;
		
		case 4: printf("\n%d\n",fix_roman_no[8]);
		break;
		
		case 5: printf("\n%d\n",fix_roman_no[10]);
		break;
		
		case 6: printf("\n%d\n",fix_roman_no[12]);
		break;
		
		default:
		printf("INVALID ENTRY\n");
		break;
		
		
	}
	
	
return 0;
}
	
	/*
	
	if(0 == strcmp(roman_no, "I"))
	{
		printf("Roman I : %d\n",fix_roman_no[0]);
	}
	else if(0 == strcmp(roman_no, "IV") )
	{
		printf("Roman IV : %d\n",fix_roman_no[1]);
	}
	else if(0 == strcmp(roman_no, "V") )
	{
		printf("Roman V : %d\n",fix_roman_no[2]);
	}
	else if(0 == strcmp(roman_no, "IX") )
	{
		printf("Roman IX : %d\n",fix_roman_no[3]);
	}
	else if(0 == strcmp(roman_no, "X") )
	{
		printf("Roman X : %d\n",fix_roman_no[4]);
	}
	else if(0 == strcmp(roman_no, "XL") )
	{
		printf("Roman XL : %d\n",fix_roman_no[5]);
	}
	else if(0 == strcmp(roman_no, "L") )
	{
		printf("Roman L : %d\n",fix_roman_no[6]);
	}
	else if(0 == strcmp(roman_no, "XC") )
	{
		printf("Roman XC : %d\n",fix_roman_no[7]);
	}
	else if(0 == strcmp(roman_no, "C") )
	{
		printf("Roman C : %d\n",fix_roman_no[8]);
	}
	else if(0 == strcmp(roman_no, "CD") )
	{
		printf("Roman CD : %d\n",fix_roman_no[9]);
	}
	else if(0 == strcmp(roman_no, "D") )
	{
		printf("Roman D : %d\n",fix_roman_no[10]);
	}
	else if(0 == strcmp(roman_no, "CM") )
	{
		printf("Roman CM : %d\n",fix_roman_no[11]);
	}
	else if(0 == strcmp(roman_no, "M") )
	{
		printf("Roman M : %d\n",fix_roman_no[12]);
	}
	*/

