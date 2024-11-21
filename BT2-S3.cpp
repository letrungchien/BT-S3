#include<stdio.h>

   int main(){
   	double nhiet_do;
   	
   	printf("nhap nhiet do ");
   	scanf("%.2f",&nhiet_do);
   	printf("nhiet do la %.2f\n",nhiet_do);
   	double doi_nhiet_do = nhiet_do*1.8+32;
   	printf("nhiet do Fahrenheit = %.2f F \n",doi_nhiet_do);
   	
   	return 0;
   }
