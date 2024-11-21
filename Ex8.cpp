#include <stdio.h>

int main() {
    int num, reNum = 0;
    printf("nhap vao so nguyen co 4 chu so: ");
    scanf("%d", &num);

    reNum += (num % 10) * 1000;
    num /= 10;

    reNum += (num % 10) * 100;
    num /= 10;

    reNum += (num % 10) * 10;
    num /= 10;

    reNum += num;

    printf("so nghich dao: %d\n", reNum);
    return 0;
}

