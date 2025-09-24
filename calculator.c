#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char op;
    long num1, num2;
    long long result;
    while (1) {
        printf("Choose an operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &op);

        if (op == 'q') {
            printf("You successfully exitted the program.\n");
            return 0;
        } else if (op != '+' && op != '-' && op != '*' && op != '/') {
            printf("Error: Invalid operator.\n");
            return 1;
        } else if (op == '/' && num2 == 0) {
            printf("Error: Division by zero.\n");
            return 1;
        } else if (op == '*') {
            printf("Enter two integers: ");
            scanf("%ld %ld", &num1, &num2);
            result = (long long)num1 * (long long)num2;
            if (result > __LONG_MAX__ || result < __LONG_WIDTH__) {
                printf("Error: Overflow occurred during multiplication.\n");
                return 1;
            }
        printf("%lld\n", result);
        } else if (op == '+') {
            printf("Enter two integers: ");
            scanf("%ld %ld", &num1, &num2);
            result = (long long)num1 + (long long)num2;
            if (result > __LONG_MAX__ || result < __LONG_WIDTH__) {
                printf("Error: Overflow occurred during addition.\n");
                return 1;
            }
            printf("%lld\n", result);
        } else if (op == '-') {
            printf("Enter two integers: ");
            scanf("%ld %ld", &num1, &num2);
            result = (long long)num1 - (long long)num2;
            if (result > __LONG_MAX__ || result < __LONG_WIDTH__) {
                printf("Error: Overflow occurred during subtraction.\n");
                return 1;
            }
            printf("%lld\n", result);
        } else if (op == '/' && num1 != 0 && num2 != 0) {
            printf("Enter two integers: ");
            scanf("%ld %ld", &num1, &num2);
            result = num1 / num2;
            printf("%lld\n", result);
        }
    }
}