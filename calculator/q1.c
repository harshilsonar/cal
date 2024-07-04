#include <stdio.h>

void add(int a, int b) {
    printf("Result: %d + %d = %d\n", a, b, a + b);
}

void subtract(int a, int b) {
    printf("Result: %d - %d = %d\n", a, b, a - b);
}

void multiply(int a, int b) {
    printf("Result: %d * %d = %d\n", a, b, a * b);
}

void divide(int a, int b) {
    if (b != 0) {
        printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void modulus(int a, int b) {
    if (b != 0) {
        printf("Result: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    int a, b;
    char choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("e. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == 'e') {
            printf("Exiting the program...\n");
            break;
        }

        if (choice >= '1' && choice <= '5') {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
        }

        switch (choice) {
            case '1':
                add(a, b);
                break;
            case '2':
                subtract(a, b);
                break;
            case '3':
                multiply(a, b);
                break;
            case '4':
                divide(a, b);
                break;
            case '5':
                modulus(a, b);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
