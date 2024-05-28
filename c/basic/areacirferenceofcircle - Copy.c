#include <stdio.h>

int main() {
  double radius, area, circumference;

  // Get the radius from the user
  printf("Enter the radius of the circle: ");
  scanf("%lf", &radius);

  // Calculate the area and circumference
  area = 3.14159 * radius * radius;
  circumference = 2 * 3.14159 * radius;

  // Print the results
  printf("The area of the circle is: %lf\n", area);
  printf("The circumference of the circle is: %lf\n", circumference);

  return 0;
}