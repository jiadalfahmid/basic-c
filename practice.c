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

   // scanf("%d", &n);

   for (int i = 0; i < n; i++)
   {

      for (int j = 1; j <= n - i - 1; j++)

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

   for (i = 0; i < value; i++)
   {
      for (k = 0; k <= i; k++)
         printf(" ");
      for (j = i; j < value; j++)
      {
         printf("* ");
      }
      printf("\n");
   }
}

// Online C compiler to run C program online
#include <stdio.h>

int fact(int m)
{
   int i, fact = 1;
   for (i = 1; i <= m; i++)
   {
      fact = fact * i;
   }
   return fact;
}

int main()
{
   int n;
   printf("Enter ther num: ");
   scanf("%d", &n);
   printf("Factorial is = %d", fact(n));
   return 0;
}

int main()
{
   int length, greetings[] = {12, 34, 45, 56, 67};
   length = sizeof(greetings) / sizeof(greetings[0]);

   for (int i = 0; i < length; i++)
   {
      printf("%d", greetings[i]);
      printf("\n");
   }
   printf("\n");
   greetings[3] = 65;

   for (int i = 0; i < length; i++)
   {
      printf("%d", greetings[i]);
      printf("\n");
   }

   return 0;
}

void myFunction(int num[5])
{
   for (int i = 0; i < 5; i++)
   {
      printf("%d\n", num[i]);
   }
}

int main()
{
   int i, j, k, l;
   int mama[5] = {10, 20, 30, 40, 50};
   myFunction(mama);
   printf("\n");

   int mami[5] = {11, 22, 33, 44, 55};
   myFunction(mami);
   return 0;
}


void mult5KoriCholo(int x){
   int mult = x * 5;
}