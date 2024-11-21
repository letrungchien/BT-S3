#include<stdio.h>

int main(){
	int van;
	int anh;
	int toan;
	printf("nhap diem van\n");
	scanf("%d",&van);
	
	printf("nhap diem anh\n");
	scanf("%d",&anh);
	
	printf("nhap diem toan\n");
	scanf("%d",&toan);
	
	float tong = van+toan+anh;
	printf("tong diem ba mon = %.2f\n",tong);
	return 0;
}
