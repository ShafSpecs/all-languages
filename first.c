#include<stdio.h>
 
int main() {
   int rad;
   float PI = 3.14, area, ci;
   
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
 
   area = PI * rad * rad;
   ci = 2 * PI * rad;
   printf("\nThe circumference is: %f, and the area is: %f\n", ci, area);
 
   return (0);
} 
