#include <stdio.h>


double simpleCalc(double num1, double num2, char op) {
    double result;
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero.\n");
                return 0;
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return 0;
    }
    return result;
}

int main() {
    char op;
    double num1, num2;
    
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);
    
    
    double result = simpleCalc(num1, num2, op);
    
    
    printf("Result: %.2lf\n", result);
    
    return 0;
}

