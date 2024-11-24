#include <stdio.h>
int main(){
	int a;
	printf("Hay nhap vao 1 so nguyen: ");
	scanf("%d",&a);
	if(a % 5 == 0 || a % 3 == 0){
		printf("Chia het cho 3 va 5");
	}else if(a % 5 == 0){
		printf("Chia het cho 5");
	}else if (a % 3 == 0){
		printf("Chia het cho ca 3");
	}else{
		printf("So ban nhap khong chia het cho ca 3 va 5");
	}
}
