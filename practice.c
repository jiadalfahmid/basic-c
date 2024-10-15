#include <stdio.h>

int jinja()
{
   int length, width, perimeter;
   length = 6;
   width = 4;
   perimeter = 2 * (length + width);

   printf("Perimeter = %d\n", perimeter);
}

int ninja()
{
   int value, i, j;
   scanf("%d", &value);
   for (i = 0; i < value; i++)
   {
      for (j = 0; j <= i; j++)
         printf("*");

      printf("\n");
   }
   return 0;
}

int manga()
{

   int n;

   scanf("%d", &n);

   for (int i = 0; i < n; i++)
   {

      for (int j = 1; j <= n - i - 1; j++)
         printf(" ");

      for (int k = 0; k <= i; k++)
         printf("*");

      printf("\n");
   }

   return 0;
}

int manji()
{
   int value, i, j;
   scanf("%d", &value);
   for (i = 0; i < value; i++)
   {
      for (j = 0; j <= value - i - 1; j++)
         printf("*");

      printf("\n");
   }
   return 0;
}

int jiji()
{

   int n;

   scanf("%d", &n);

   for (int i = 0; i < n; i++)
   {

      for (int j = i; j < n; j++)
         printf("*");

      printf("\n");
   }
   return 0;
}

int miji()
{

   int n;

   scanf("%d", &n);

   for (int i = 0; i < n; i++)
   {

      for (int j = i; j < n; j++)
         printf("*");

      printf("\n");
   }
   return 0;
}

int pain()
{

   int n = 5;

   //scanf("%d", &n);

   for (int i = 0; i < n; i++)
   {

      for (int j = 1; j <= n - i -1; j++)

         printf(" ");
      for (int k = 0; k <= i; k++)
         printf("* ");

      printf("\n");
   }

   return 0;
}


int main()
{
   int value = 5, i, j, k;

   for(i = 0; i < value ; i++){
      for(j=i; j<value; j++){
         printf("* ");
      }
      printf("\n");
   }
}
