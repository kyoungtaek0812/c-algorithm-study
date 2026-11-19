// 문제 1. 팩토리얼은 어디까지 맞을까 (정수의 한계)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;
    printf("1~25의 정수를 입력하세요: ");
    scanf("%d", &n);

    printf("sizeof(int) = %zu바이트, sizeof(long long) = %zu바이트\n\n",
           sizeof(int), sizeof(long long));

    int f_int = 1;            // 4바이트: 최대 2,147,483,647
    long long f_ll = 1;       // 8바이트: 최대 9,223,372,036,854,775,807

    for (int i = 1; i <= n; i++) {
        f_int *= i;
        f_ll *= i;
        printf("%2d! = int: %11d | long long: %20lld\n", i, f_int, f_ll);
    }
    return 0;
}
