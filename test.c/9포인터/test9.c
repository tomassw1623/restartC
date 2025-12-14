#include <stdio.h>

int main(void) {
    // [하는 일]
    // 문자열을 포인터로 한 글자씩 출력한다.

    char s[] = "hello";
    char *p = s; // 첫 글자 주소

    // 문자열은 '\0'이 나올 때까지가 실제 글자다.
    while (*p != '\0') {
        putchar(*p); // 한 글자 출력
        p++;         // 다음 글자로 이동
    }
    putchar('\n');

    return 0;
}
