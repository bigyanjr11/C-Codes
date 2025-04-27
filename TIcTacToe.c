#include <stdio.h>
int isPrime(int number) {
    if (number <= 1) {
        return 0; // Players less than 2 are disqualified
    }
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return 0; // Player can be divided, not a prime!
        }
    }
    return 1; // Player is a Prime Champion!
}

int main() {
    int num;

    printf("Enter the jersey number to check if he's a Prime Player: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("Player #%d is a PRIME STAR!\n", num);
    } else {
        printf("Player #%d needs more training.\n", num);
    }

    return 0;
}
