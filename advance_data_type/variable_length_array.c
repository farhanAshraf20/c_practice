#include <stdio.h>

void oneDArray( int length, int a[ length ]); //function prototype
void twoDArray( int row, int col, int a[ row ][ col ]); //function prototype

int main()
{
   int i, j; //counter variable
   int size; //variable to hold size of one dimensional array
   int row1, col1, row2, col2; //number of rows & columns of two D array

   printf("Enter size of one-dimensional array: ");
   scanf("%d", &size);

   printf("Enter number of rows & columns of 2-D array:\n");
   scanf("%d %d", &row1, &col1);

   printf("Enter number of rows & columns of multi-D array:\n");
   scanf("%d %d", &row2, &col2);

   //declaring arrays
   int arr[ size ];
   int arr2D[ row1 ][ col1 ]; //2-D array
   int arrMD[ row2 ][ col2 ]; //multi-dimensional array

   //one dimensional array
   for ( i = 0; i < size; ++i)
   {
      arr[ i ] = 2 * i;
   }

   //two dimensional array
   for ( i = 0; i < row1; ++i)
   {
      for ( j = 0; j < col1; ++j)
      {
      arr2D[ i ][ j ] = i + j;
      }
   }

   //multi-dimensional array
   for ( i = 0; i < row2; ++i)
   {
      for ( j = 0; j < col2; ++j)
      {
         arrMD[ i ][ j ] = i + j;
      }
   }

   //printing arrays
   printf("One-dimensional array:\n");
   oneDArray( size, arr );

   printf("Two-dimensional array:\n");
   twoDArray( row1, col1, arr2D );

   printf("\nMulti-dimensional array:\n");
   twoDArray( row2, col2, arrMD );

   return 0;
}  //end main

void oneDArray( int length, int a[ length ])
{
   int i;
   for ( i = 0; i < length; ++i)
   printf("a[%d] : %d\n", i, a[ i ]);
 }  //end of oneDArray

void twoDArray( int row, int col, int a[ row ][ col ])
{
   int i, j;
   for ( i = 0; i < row; ++i )
   {
      printf("\n");
      for ( j = 0; j < col; ++j )
         printf("%5d", a[i][j]);
   }
}  //end twoDArray
