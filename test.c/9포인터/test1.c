#include <stdio.h>

int main(void) {
    // [하는 일]
    // 변수의 값/주소, 포인터의 값(주소), 역참조(*p) 값을 출력한다.

    int a = 10;
    int *p = &a; // p는 a의 주소를 저장한다.

    // 주소 출력은 %p를 쓰고 (void*)로 형변환하는 습관을 들이면 안전하다.
    printf("a 값=%d\n", a);
    printf("a 주소=%p\n", (void*)&a);

    printf("p가 가진 값(=a의 주소)=%p\n", (void*)p);
    printf("*p 값(=a의 값)=%d\n", *p);

    return 0;
}
