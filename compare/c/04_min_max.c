// 문제 4. 결과를 두 개 돌려주기 (포인터 매개변수)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// C 함수는 값을 하나만 return할 수 있어서, 결과를 담을 곳의 주소를 받는다
void min_max(int arr[], int n, int *min, int *max) {
    printf("함수 안 sizeof(arr) = %zu (배열이 아니라 포인터)\n", sizeof(arr));
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}

int main(void) {
    int n, arr[100];
    printf("개수를 입력하세요(1~100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("main의 sizeof(arr) = %zu (int 100칸 = 400바이트)\n", sizeof(arr));

    int mn, mx;
    min_max(arr, n, &mn, &mx);   // mn, mx가 있는 곳의 주소를 넘긴다
    printf("최솟값: %d, 최댓값: %d\n", mn, mx);
    return 0;
}
