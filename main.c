#include <stdio.h>

int countEqualDivisors(int number) {
    int count = 0;
    for (int i = 1; i < number; ++i) {
        if (number / i == number % i) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter a natural number (n): ");
    scanf("%d", &n);
    if (n > 1 && n < 150) {
        printf("The number of equal divisors of %d is: %d\n", n, countEqualDivisors(n));
    } else {
        printf("The value of n should be greater than 1 and less than 150.\n");
    }
    return 0;
}
