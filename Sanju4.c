#include <stdio.h>
#include <math.h>
int main()
{
  printf("This program helps you calculate the hypotenuse of a right-anngled triangle given the base and the height.\n");

   float base;
   printf("Enter the base of the triangle: ");
   scanf("%f", base);

   float height;
   printf("Enter the height of the triangle: ");
   scanf("%f", height);

  float hypotenuse = sqrt(base*base + height*height);
  printf("The hypotenuse of your triangle is: %f", hypotenuse);

  return 0;
}
