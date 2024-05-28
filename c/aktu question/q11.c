//	Write a program that takes two operands and one operator from the user and performs the operation and prints the result by using the Switch statement.
 #include <stdio.h>

int main() {
    float operand1, operand2, result;
    char operator;

    // Input operands and operator from the user
    printf("Enter first operand: ");
    scanf("%f", &operand1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any whitespace characters

    printf("Enter second operand: ");
    scanf("%f", &operand2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            // Check for division by zero
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  // Exit with an error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;  // Exit with an error code
    }

    // Print the result
    printf("Result: %.2f\n", result);
    printf("result %f",result);

    return 0;  // Exit successfully
}
