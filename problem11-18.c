#include <stdio.h>
int main()
{
   float score;

   // input student's score
   printf("Enter the students score:");
   scanf("%f", &score);

   // grading system using if-else
   if (score > 90)
   {
      printf("grade: A+ (EXCELLENT)\n");
   }
   else if (score >= 85)
   {
      printf("grade: A (VERY GOOD)\n");
   }
   else if (score >= 75)
   {
      printf("grade B (ABOVE AVERAGE)\n");
   }
   return 0;
}