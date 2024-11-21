#include <stdio.h>

int main(){
	float r, cv, s;
	printf("nhap ban kinh hinh tron: ");
	scanf("%f", &r);
	cv = (2 * 3.14) * r;
	s = 3.14 * (r * r);
	printf("chu vi hinh tron: %.2f\n", cv);
	printf("dien tich hinh tron: %.2f", s);
	
	return 0;
}
