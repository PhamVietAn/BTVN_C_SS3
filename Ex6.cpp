#include <stdio.h>

int main(){
	float a, h, s;
	printf("nhap do dai canh cua hinh tam giac can: ");
	scanf("%f",&a); 
	printf("nhap chieu cao hinh tam giac: ");
	scanf("%f",&h); 
	
	s = (a * h) / 2;
	printf("dien tich cua hinh tam giac deu là: %.2f", s);
	
	return 0; 
} 
