#include <stdio.h>

int main ()
{
	float a;
	printf("Dien thu nhap tinh thue hang thang\n");
	scanf("%f" ,&a);
	
	if(a<=5){
		printf("Tien thue la: %f\n", a*0.05);
	}else{
		if(a<=10){
			printf("Tien thue la: %f\n", a*0.10);
		}else{
			if(a<=18){
				printf("Tien thue la: %f\n", a*0.15);
			}else{
				if(a<=32){
					printf("Tien thue la: %f\n", a*0.20);
				}else{
					if(a<=52){
						printf("Tien thue la: %f\n", a*0.25);
					}else{
						if(a<=80){
							printf("Tien thue la: %f\n", a*0.30);
						}else{
							printf("Tien thue la: %f\n", a*0.35);
						}
					}
				}
			}
		}
	}
}
