int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;

#include <stdio.h>
int main() {
	int x;
	printf ("Dien x: ");
	scanf ("%d" , &x);

	int y;
	printf ("Dien y: ");
	scanf ("%d" , &y);
	
	printf("%d^%d = %d\n", x, y, power(x, y));
	
}
