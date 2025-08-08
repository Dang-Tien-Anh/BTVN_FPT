#include <stdio.h>

int main() {
	int num1;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    
    int num2;
    printf("Nhap so thu 2: ");
    scanf("%d", &num2);
    
    int distance1 = 10-num1;
    if (distance1<0){
    	distance1 = -distance1;
	}
    
    int distance2 = 10-num2;
    if (distance2<0){
    	distance2 = -distance2;
	}
	
	if (distance1 < distance2) {
        printf("%d gan voi so 10 hon\n", num1);
    } else if (distance1 < distance2) {
        printf("%d gan voi so 10 hon\n", num2);
    } else {
        printf("2 so bang nhau.\n");
    }

}
