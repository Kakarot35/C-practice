#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 1; i <= n; i++) {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("%d is an even number.\n", num);
        } else {
            printf("%d is an odd number.\n", num);
        }

        if (isPrime(num)) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }

        printf("\n");
    }

    return 0;
}
