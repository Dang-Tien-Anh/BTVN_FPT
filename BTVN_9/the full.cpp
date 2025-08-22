#include <cstdio>

int sumOfDigits(int n) {
    int sum = 0;
    n = n < 0 ? -n : n;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


int gcd(int a, int b) {
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}


int lcm(int a, int b) {
    return a * b / gcd(a, b);
}


int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}


int reverseInteger(int n) {
    int reversed = 0;
    int sign = n < 0 ? -1 : 1;
    n = n < 0 ? -n : n;
    while (n) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed * sign;
}


int maxInArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i)
        if (arr[i] > max) max = arr[i];
    return max;
}


int minInArray(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i)
        if (arr[i] < min) min = arr[i];
    return min;
}


void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i)
        for (int j = 0; j < size - i - 1; ++j)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}


void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}


int main() {
    int n = -12345;
    int a = 12, b = 18;
    int x = 2, y = 5;
    int arr[] = {3, 1, 4, 1, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Tong cac chu so cua %d la: %d\n", n, sumOfDigits(n));
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, gcd(a, b));
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, lcm(a, b));
    printf("%d^%d = %d\n", x, y, power(x, y));
    printf("Dao nguoc so nguyen %d la: %d\n", n, reverseInteger(n));
    printf("Phan tu lon nhat trong mang: %d\n", maxInArray(arr, size));
    printf("Phan tu nho nhat trong mang: %d\n", minInArray(arr, size));

    sortArray(arr, size);
    printf("Mang sau khi sap xep tang dan: ");
    printArray(arr, size);

    reverseArray(arr, size);
    printf("Mang sau khi dao nguoc: ");
    printArray(arr, size);
}

