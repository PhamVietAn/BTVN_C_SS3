#include <stdio.h> 

int main(){
	float c, f;
	printf("nhap nhiet do theo do c: ");
	scanf("%f", &c);
	f = (c * 9/5) + 32;
	printf("nhiet do theo do f: %.1f\n", f);
	return 0;
} 
