#include <stdio.h>

int main(void) {
    // [하는 일]
    // const 포인터로 "읽기 전용"처럼 사용해본다.

    int a = 10;
    const int *p = &a; // *p로는 변경 불가(실수 방지)

    printf("*p=%d\n", *p);

    // *p = 20; // (의도적으로 막힘) 컴파일 에러
    a = 20;       // 원본은 바꿀 수 있음
    printf("*p=%d\n", *p);

    return 0;
}
