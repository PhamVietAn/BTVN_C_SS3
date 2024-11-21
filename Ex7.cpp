#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &num);

    sum += num % 10;
    num /= 10;

    sum += num % 10;
    num /= 10;

    sum += num % 10;
    num /= 10;

    sum += num % 10;

    printf("tong cac chu so: %d\n", sum);
    return 0;
}

