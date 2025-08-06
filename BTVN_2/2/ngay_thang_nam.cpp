#include <stdio.h>

int main ()
{
	int a;
	printf("Dien ngay\n");
	scanf("%d" ,&a);
	
	int b;
	printf("Dien thang\n");
	scanf("%d" ,&b);
	
	int c;
	printf("Dien nam\n");
	scanf("%d" ,&c);
	
	if(b==4||b==6||b==9||b==11){
		if(a>30||a<=0){
			printf("Khong co ngay nay!");
		}else{
			if(a==30){
				printf("Hom sau la mung 1 thang %d nam %d",b+1, c);
			}else{
				printf("Hom sau la ngay %d thang %d nam %d", a+1, b, c);
			}
		}
	}else{
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
			if(a>31||a<=0){
				printf("Khong co ngay nay!");
			}else{
				if(a==31){
					if(b==12){
						printf("Hom sau la mung 1 thang 1 nam %d", c+1);
					}else{
						printf("Hom sau la mung 1 thang %d nam %d",b+1, c);
					}
				}else{
					printf("Hom sau la ngay %d thang %d nam %d", a+1, b, c);
				}
			}
		}else{
			if(b==2){
				if(a>29||a<=0){
					printf("Khong co ngay nay!");
				}else{
					if(a==28){
						printf("Hom sau co the la 29 thang 2 nam %d hoac la 1 thang 3 nam %d", c, c);
					}else{
						printf("Hom sau la ngay %d thang %d nam %d", a+1, b, c);
					}
				}
			}else{
				printf("Khong co thang nay!");
			}
		}
	}
}
