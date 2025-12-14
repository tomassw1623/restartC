#include <stdio.h>

int main(void) {
    // [하는 일]
    // 단어(공백 전까지)를 입력받아 길이를 직접 계산해서 출력한다(strlen 없이).

    char s[100];
    int len = 0;

    printf("단어 입력: ");
    scanf("%99s", s); // 99자까지만 받기(버퍼 넘침 방지)

    // 문자열은 끝에 '\0'(널 문자)로 끝난다.
    while (s[len] != '\0') {
        len++;
    }

    printf("길이=%d\n", len);
    return 0;
}
