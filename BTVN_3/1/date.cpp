#include <stdio.h>

int main() {
    int day;
    printf("Nhap ngay: ");
    scanf("%d", &day);
    
    int month;
    printf("Nhap thang: ");
    scanf("%d", &month);
    
    int year;
    printf("Nhap nam: ");
    scanf("%d", &year);

    int is_leap = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        is_leap = 1;
    }

    int total_days = day;

    if (month > 1) {
        total_days = total_days + 31; 
    }
    
    
    if (month > 2) {
        if (is_leap == 1) {
            total_days = total_days + 29; 
        } else {
            total_days = total_days + 28; 
        }
    }
    
    
    if (month > 3) {
        total_days = total_days + 31; 
    }
    
    
    if (month > 4) {
        total_days = total_days + 30; 
    }
    
    
    if (month > 5) {
        total_days = total_days + 31; 
    }
    
    
    if (month > 6) {
        total_days = total_days + 30; 
    }
    
    
    if (month > 7) {
        total_days = total_days + 31; 
    }
    
    
    if (month > 8) {
        total_days = total_days + 31; 
    }
    
    
    if (month > 9) {
        total_days = total_days + 30; 
    }
    
    
    if (month > 10) {
        total_days = total_days + 31; 
    }
    
    
    if (month > 11) {
        total_days = total_days + 30; 
    }

    printf("Ngay %d/%d/%d la ngay thu %d trong nam.\n", day, month, year, total_days);
}
