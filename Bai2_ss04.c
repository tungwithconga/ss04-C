#include <stdio.h>
int main(){
	int a;
	printf("Hay nhap so ban mong muon: ");
	scanf("%d",&a);
	if(a % 2 == 0){
		printf("Day la so chan");
	}else if (a % 2 != 0){
		printf("Day la so le");
	}else{
		printf("So ban nhap khong hop le");
	}
}
