// 문제 2. -7 나누기 2는? (언어마다 다른 나눗셈 규칙)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Python의 // 처럼 아래로 내리는 나눗셈
int floor_div(int a, int b) {
    int q = a / b;                          // C는 0 쪽으로 버림
    if (a % b != 0 && ((a < 0) != (b < 0))) // 나누어떨어지지 않고 부호가 다르면
        q--;                                // 한 칸 아래로
    return q;
}

int main(void) {
    int pairs[4][2] = { {7, 2}, {-7, 2}, {7, -2}, {-7, -2} };

    for (int i = 0; i < 4; i++) {
        int a = pairs[i][0], b = pairs[i][1];
        printf("a=%2d, b=%2d | C 몫: %2d, C 나머지: %2d | floor_div: %2d\n",
               a, b, a / b, a % b, floor_div(a, b));
    }
    return 0;
}
