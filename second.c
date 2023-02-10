#include <stdio.h>

#define pi 3.14f /* Define the value of pie */

void main() {
  /* Variable Declaration. */
  float radius, perimeter, area;

  /* Taking input of the radious of the circle from the user */
  printf("Enter radius of the Circle:\n");
  scanf("%f", & radius);

  /* Calculating perimeter of the circle */
  perimeter = 2 * pi * radius;
  printf("Perimeter of the circle: %0.4f\n", perimeter);

  /* Calculating area of the circle */
  area = pi * radius * radius;
  printf("Area of circle: %0.4f\n", area);
}
