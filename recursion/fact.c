#include<stdio.h>

int fact(int n)
{
    int result =0;
    
    if(n==0)
    {
        result =1;
    }
    else
    {
        result = n *fact(n-1);
    }
    
    return result;
}

int main()
{
    int k,z;
    printf("Enter a no : ");
    scanf("%d",&k);
    printf("fact %d! : %d",k,fact(k));
}
