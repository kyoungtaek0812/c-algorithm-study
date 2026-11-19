// 문제 3. len() 없이 길이 재기 (C의 문자열)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int my_strlen(char s[]) {
    int len = 0;
    while (s[len] != '\0')   // 문자열 끝 표시('\0')가 나올 때까지 센다
        len++;
    return len;
}

void reverse(char s[]) {
    int left = 0, right = my_strlen(s) - 1;
    while (left < right) {   // 양 끝을 바꾸며 안쪽으로
        char t = s[left];
        s[left] = s[right];
        s[right] = t;
        left++;
        right--;
    }
}

int main(void) {
    char s[101];
    printf("단어를 입력하세요: ");
    scanf("%100s", s);       // 배열 이름 s가 곧 주소라서 &를 붙이지 않는다

    printf("길이: %d\n", my_strlen(s));
    s[0] = 'K';              // C의 char 배열은 칸마다 바꿀 수 있다 (Python 문자열은 불가)
    printf("첫 글자 변경: %s\n", s);
    reverse(s);
    printf("뒤집기: %s\n", s);
    return 0;
}
