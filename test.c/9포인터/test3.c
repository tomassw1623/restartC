#include <stdio.h>

int main(void) {
    // [하는 일]
    // 두 변수 중 큰 값의 주소를 가리키게 만들고, 그 값을 출력한다.

    int a = 10, b = 20;
    int *p;

    // 조건에 따라 p가 가리키는 대상이 바뀔 수 있다.
    if (a > b) p = &a;
    else       p = &b;

    printf("큰 값=%d\n", *p);
    return 0;
}
