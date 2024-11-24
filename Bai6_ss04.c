#include <stdio.h>
int main(){
	float a,b;
	printf("Nhap vao so cong to dien tu dau thang: ");
	scanf("%f",&a);
	printf("Nhap vao so cong to dien tu cuoi thang: ");
	scanf("%f",&b);
	float result = b - a;
	if(result >= 0 && result < 50){
		float cost = result * 10000;
		printf("Gia dien cua nguoi dung la: %.2f VND",cost);
	}else if (result >= 50 && result < 100){
		float cost = result * 15000;
		printf("Gia dien cua nguoi dung la: %.2f VND",cost);
	}else if (result >= 100 && result < 150){
		float cost = result * 20000;
		printf("Gia dien cua nguoi dung la: %.2f VND",cost);
    }else if (result >= 150 && result < 200){
		float cost = result * 25000;
		printf("Gia dien cua nguoi dung la: %.2f VND",cost);
    }else{
		float cost = result * 30000;
		printf("Gia dien cua nguoi dung la: %.2f VND",cost);
    };
    return 0;
} 
