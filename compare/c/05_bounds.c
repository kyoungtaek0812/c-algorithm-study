// 문제 5. Python이 해주던 범위 검사를 직접 만들기 (배열과 메모리)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// i가 범위 안이면 *out에 값을 넣고 1, 아니면 에러 메시지와 0
int safe_get(int arr[], int n, int i, int *out) {
    if (i < 0 || i >= n) {
        printf("IndexError: 범위를 벗어났습니다 (i=%d, 길이=%d)\n", i, n);
        return 0;
    }
    *out = arr[i];
    return 1;
}

int main(void) {
    int a[5] = { 10, 20, 30, 40, 50 };
    char c[5] = { 'a', 'b', 'c', 'd', 'e' };
    double d[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

    printf("[A] 각 칸의 주소\n");
    for (int i = 0; i < 5; i++)
        printf("&a[%d] = %p | &c[%d] = %p | &d[%d] = %p\n",
               i, (void *)&a[i], i, (void *)&c[i], i, (void *)&d[i]);

    // 범위 밖 읽기는 '정의되지 않은 동작'. 실험으로 한 번만 확인한다.
    printf("\n[A] 범위 밖: a[5] = %d (에러 없이 무언가가 읽힘)\n", a[5]);

    printf("\n[B] safe_get\n");
    int v;
    if (safe_get(a, 5, 2, &v)) printf("a[2] = %d\n", v);
    safe_get(a, 5, 5, &v);
    return 0;
}
