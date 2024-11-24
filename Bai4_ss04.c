#include <stdio.h>
int main(){
	int month;
	printf("Nhap vao thang ban muon kiem tra: ");
	scanf("%d",&month);
	switch(month){
		case 1:
			printf("Thang co 31 ngay");
			break;
		case 2:
			printf("Thang co 28 hoac 29 ngay");
			break;
		case 3:
			printf("Thang co 31 ngay");
			break;
		case 4:
			printf("Thang co 30 ngay");
			break;
		case 5:
			printf("Thang co 31 ngay");
			break;
		case 6:
			printf("Thang co 30 ngay");
			break;
		case 7:
			printf("Thang co 31 ngay");
			break;
		case 8:
			printf("Thang co 30 ngay");
			break;
		case 9:
			printf("Thang co 31 ngay");
			break;
		case 10:
			printf("Thang co 30 ngay");
			break;
		case 11:
			printf("Thang co 31 ngay");
			break;
		case 12:
			printf("Thang co 30 ngay");
			break;
		default:
			printf("Thang khong hop le");
			break;
	}
}
