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

#include <stdio.h>
int main() {
	int a;
	printf ("Dien a: ");
	scanf ("%d" , &a);

	int b;
	printf ("Dien b: ");
	scanf ("%d" , &b);
	
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, gcd(a, b));
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, lcm(a, b));
	    
}
