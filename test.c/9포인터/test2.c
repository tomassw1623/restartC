#include <stdio.h>

int main(void) {
    // [하는 일]
    // 포인터를 이용해 원본 변수 값을 바꿔본다.

    int a = 5;
    int *p = &a;

    // *p = "p가 가리키는 곳에 값을 넣기"
    *p = 99;

    printf("a=%d\n", a); // a가 실제로 바뀐다.
    return 0;
}
