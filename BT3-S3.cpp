#include<stdio.h>

int main() {
    const float PI = 3.14; 
   double ban_kinh;  
	printf("nhap ban kinh\n");
	scanf("%f",&ban_kinh);
	    
    printf("Gia tri ban kinh hinh tron = %.2f \n", ban_kinh);

    float chuVi = 2 * PI * ban_kinh;
    printf("Chu vi hinh tron = %.2f \n", chuVi);

    float dien_Tich = PI * ban_kinh * ban_kinh;
    printf("Dien tich hinh tron = %.2f \n", dien_Tich);

    return 0;
}
