#include <stdio.h>
#include <math.h>

int is_prime(int num) {
    // 0: not prime, 1: prime
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    // check odd numbers
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main(){
    int number;

    do {
        printf("Please enter an integer <between 2 to 9999999>: "); 
        scanf("%d", &number);

        if (number < 2 || number > 9999999) {
            printf("%d is not between 2 to 9999999, please re-enter.\n", number);   
        }
    } while (number < 2 || number > 9999999);

    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
}

