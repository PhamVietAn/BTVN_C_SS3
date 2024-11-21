#include <stdio.h>

int main(){
	float math, literature, eng, total, avgMark;
	printf("nhap diem toan: ");
	scanf("%f", &math);
	printf("nhap diem van: ");
	scanf("%f", &literature);
	printf("nhap diem anh: ");
	scanf("%f", &eng);
	
	total = math + literature + eng;
	avgMark = total / 3;
	printf("tong diem: %.2f", total);
	printf("diem trung binh: %.2f", avgMark);
	
	return 0;
}
