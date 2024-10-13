#include <stdio.h>

int main()
{
   int r;
   const float pi = 3.1416;
   float d, c, a;

   printf("Enter radius: ");
   scanf("%d", &r);
   d = 2 * r;
   c = 2 * pi * r;
   a = pi * r * r;
   printf("Diameter = %.2f units\n", d);
   printf("Circumference = %.2f units\n", c);
   printf("Area = %.2f units\n", a);
}

int main()
{
   float cm, m, km;

   printf("Enter length in centimeter: ");
   scanf("%f", &cm);
   m = cm / 100;
   km = cm / 100000;
   printf("Length in meter = %.0f m\n", m);
   printf("Length in kilometer = %.3f km\n", km);
}

int main()
{
   int f, c;
   printf("Enter temperature in Celsius: ");
   scanf("%d", &c);
   f = (c * 1.8) + 32;
   printf("Temperature in Fahrenheit = %d", f);
}

int main()
{
   int f;
   float c;
   printf("Enter temperature in Fahrenheit: ");
   scanf("%d", &f);
   c = (f - 32) * .555555555;
   printf("Temperature in Celsius = %.2f", c);
}

int main()
{
   int days, years, months, weeks, remainingDays;
   printf("Enter days: ");
   scanf("%d", &days);
   years = days / 365;
   remainingDays = days % 365;
   months = remainingDays / 30;
   remainingDays = remainingDays % 30;
   weeks = remainingDays / 7;
   remainingDays = remainingDays % 7;
   printf("Years: %d, Months: %d, Weeks: %d, Days: %d\n", years, months, weeks, remainingDays);
}