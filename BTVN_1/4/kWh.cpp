#include <stdio.h>

int main()

{
	float a;
	printf("Dien so kWh tieu thu \n");
	scanf("%f",&a);
	
	if(a<=50){
		printf("So tien bang %f", 1.678*a);
	}else{
		if(a<=100){
			printf("So tien bang %f", 1.678*50 + 1.734*(a-50));
		}else{
			if(a<=200){
				printf("So tien bang %f", 1.678*50 + 1.734*50 +2.014*(a-100));
			}else{
				printf("So tien bang %f", 1.678*50 + 1.734*50 +2.014*100 + 2.536*(a-200));
			}
		}
	}
}
