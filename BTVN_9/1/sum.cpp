int sumOfDigits(int n) {
    int sum = 0;
    n = n < 0 ? -n : n;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

#include <stdio.h>
int main() {
    int n;
    printf ("Dien so nguyen n: ");
    scanf ("%d" , &n);
    printf("Tong cac chu so cua %d la: %d\n", n, sumOfDigits(n));
}
