#include <stdio.h>
int main()
{
   printf("This prtogram calculates the number of weeks there is in an year given the number of days.\n");

   int days;
   printf("Enter the number of days in an year: ");
   scanf("%d", &days);

   float weeks = days/14.0;
   printf("The number of weeks in an year are: %f", weeks);

   return 0;

}
