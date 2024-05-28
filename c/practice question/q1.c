#include <stdio.h>
#include <math.h>

void printCircle(int radius) {
    // Loop to iterate through each row
    for (int i = 0; i <= 2 * radius; i++) {
        // Loop to iterate through each column
        for (int j = 0; j <= 2 * radius; j++) {
            // Calculate distance of current point from center
            int distance = sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));

            // Check if the distance is approximately equal to the radius
            if (distance = radius - 0.5 && distance = radius + 0.5) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int radius;

    // Get the radius of the circle from the user
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    // Print the circle
    printCircle(radius);

    return 0;
}
