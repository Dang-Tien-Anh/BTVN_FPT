#include <stdio.h>

int main() {
    int num;
    printf("Nhap 1 chu so tu 0 den 9: ");
    scanf("%d", &num);

    if (num == 0){
		printf("Day la so: Khong\n");
    }else if (num == 1){
        printf("Day la so: Mot\n");
    }else if (num == 2){
        printf("Day la so: Hai\n");
    }else if (num == 3){
        printf("Day la so: Ba\n");
    }else if (num == 4){
        printf("Day la so: Bon\n");
    }else if (num == 5){
        printf("Day la so: Nam\n");
    }else if (num == 6){
        printf("Day la so: Sau\n");
    }else if (num == 7){
        printf("Day la so: Bay\n");
    }else if (num == 8){
        printf("Day la so: Tam\n");
    }else if (num == 9){
        printf("Day la so: Chin\n");
    }else
        printf("Không phai chu so tu 0 den 9\n");
}

