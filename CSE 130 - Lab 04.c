#include <stdio.h>

//Angelia Zhong
//Date: 02/09/2024
//Course: CSE 130
//Section: B
//Lab number: 04

// Function 
int addition(int e, int d);
int subtraction(int e, int d);
int multiplication(int e, int d);
int division(int e, int d);
int modulus_intonly(int e, int d);
int test_if_prime(int r);
int factorial(int e);
int power(int ba, int ex);
int fib_sequence(int n);

// Define Functions
int addition(int e, int d) {
    return e + d;
}

int subtraction(int e, int d) {
    return e - d;
}

int multiplication(int e, int d) {
    return e * d;
}

int division(int e, int d) {
    return e / d;
}

int modulus_intonly(int e, int d) {
    return e % d;
}

int test_if_prime(int r) {
    if (r <= 1) {
        return 0; // Not prime
    }

    for (int i = 2; i * i <= r; ++i) {
        if (r % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int factorial(int e)
{
	if (e == 0) return 1;
	return e * factorial(e - 1);
}

int power(int ba, int ex)
{
	int result = 1;
	for (int i = 0; i < ex; i++)
	{
		result *= ba;
	}
	return result;
}

void fibonacci(int n)
{
	int fib_sequence[n];
	fib_sequence[0] = 0;
	fib_sequence[1] = 1;
	printf("Fibonacci Sequence: %d, %d, ", fib_sequence[0], fib_sequence[1]);
	for(int i = 2; i < n; i++)
	{
		fib_sequence[i] = fib_sequence[i - 1] + fib_sequence[i - 2];
		printf("%d, ", fib_sequence[i]);
	}
	printf("\n");
}

int main() {
    int decision, numbe1, numbe2;

    do {
        // Display calculator menu
        printf("\nCalculator Menu:\n");
        printf("(1) Addition\n");
        printf("(2) Subtraction\n");
        printf("(3) Multiplication\n");
        printf("(4) Division\n");
        printf("(5) Modulus (integers only)\n");
        printf("(6) Test if prime (integers only)\n");
        printf("(7) Factorial (integers only) \n");
        printf("(8) Power\n");
        printf("(9) Fibonacci\n");
        printf("(0) Exit\n");
        printf("Please choose an operation: ");
        scanf("%d", &decision);

        // Perform the selected operation
        switch (decision) {
            case 1:
                printf("Enter the first number: ");
                scanf("%d", &numbe1);
                printf("Enter the second number: ");
                scanf("%d", &numbe2);
                printf("%d + %d = %d\n", numbe1, numbe2, addition(numbe1, numbe2));
                break;
            case 2:
                printf("Enter the first number: ");
                scanf("%d", &numbe1);
                printf("Enter the second number: ");
                scanf("%d", &numbe2);
                printf("%d - %d = %d\n", numbe1, numbe2, subtraction(numbe1, numbe2));
                break;
            case 3:
                printf("Enter the first number: ");
                scanf("%d", &numbe1);
                printf("Enter the second number: ");
                scanf("%d", &numbe2);
                printf("%d * %d = %d\n", numbe1, numbe2, multiplication(numbe1, numbe2));
                break;
            case 4:
                printf("Enter the first number: ");
                scanf("%d", &numbe1);
                printf("Enter the second number: ");
                scanf("%d", &numbe2);
                if (numbe2 == 0) {
                    printf("Error: Cannot be divided by zero\n");
                } else {
                    printf("%d / %d = %d\n", numbe1, numbe2, division(numbe1, numbe2));
                }
                break;
            case 5:
                printf("Enter the first number: ");
                scanf("%d", &numbe1);
                printf("Enter the second number: ");
                scanf("%d", &numbe2);
                if (numbe2 == 0) {
                    printf("Error: Cannot be modulus by zero\n");
                } else {
                    printf("%d %% %d = %d\n", numbe1, numbe2, modulus_intonly(numbe1, numbe2));
                }
                break;
            case 6:
                printf("Enter the number to be tested: ");
                scanf("%d", &numbe1);
                if (test_if_prime(numbe1)) {
                    printf("%d is prime number.\n", numbe1);
                } else {
                    printf("Not prime: %d * %d = %d\n", numbe1, numbe2,multiplication(numbe1, numbe2));
                }
                break;
            case 7:
            	printf("Enter an integer: ");
            	scanf("%d", &numbe1);
            	printf("Result: %d\n", factorial(numbe1));
            	break;
            case 8:
            	printf("Enter the base: ");
            	scanf("%d", &numbe1);
            	printf("Enter the exponent: ");
            	scanf("%d", &numbe2);
            	printf("%d^%d = %d\n", numbe1, numbe2, power(numbe1, numbe2));
            	break;
            case 9:
            	printf("Enter the number of Fibonacci sequence elements: ");
            	scanf("%d", &numbe1);
            	fibonacci(numbe1);
            	break;
            case 10:
                printf("GoodBye!\n");
                break;
        }
    } while (decision != 0);

    return 0;
}